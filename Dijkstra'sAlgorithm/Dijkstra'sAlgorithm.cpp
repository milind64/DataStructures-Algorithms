#include <iostream>
using namespace std;
#include <limits.h>

#define V 6

int minDist(int dist[], bool visited[])
{

	int min = INT_MAX, min_index;

	for (int i = 0; i < V; i++)
		if (visited[i] == false && dist[i] <= min)
			min = dist[i], min_index = i;

	return min_index;
}

void printSolution(int dist[])
{
    for(int j = 0;j < V;j++){
    if(dist[j] > V)
        dist[j] = 0;
    }
	cout << "Vertex \t\tDistance from 0 (source)" << endl;
	for (int i = 0; i < V; i++)
		cout << i << "\t-->\t" << dist[i] << endl;
}

void dijkstra(int graph[V][V], int src)
{
	int dist[V];
	bool visited[V];
	
	for (int i = 0; i < V; i++)
		dist[i] = INT_MAX, visited[i] = false;

	dist[src] = 0;

	for (int j = 0; j < V - 1; j++) {

		int u = minDist(dist, visited);

		visited[u] = true;

		for (int v = 0; v < V; v++){
			if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];}
	}

	printSolution(dist);
}

int main()
{

	int graph[V][V] = { 
						{0,2,2,1,0,0},
						{0,0,0,2,0,0},
						{0,0,0,3,1,0}, 
						{0,0,0,0,2,0},
						{0,0,0,0,0,0},
						{1,5,0,0,0,0}
					  };

	dijkstra(graph, 0);

	return 0;
}