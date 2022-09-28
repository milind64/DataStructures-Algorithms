#include <bits/stdc++.h>
using namespace std;
#define V 6

void printMST(int parent[] , int graph[V][V])
{
	int sum = 0;
    cout<<"Edge       Weight\n";
	for(int i = 1; i < V;i++)
 	{
		cout<<parent[i]<<" --> "<<i<<"    "<<graph[i][parent[i]]<<"\n";
		sum+=graph[i][parent[i]];
	}
	cout<<"Sum of MST Weights : "<<sum;
}


int minWeight(int weight[] , bool visited[])
{
	int min = INT_MAX, min_index;
	
	for (int v = 0; v < V; v++)
	{
		if(visited[v] == false && weight[v] < min)
		{  
			min = weight[v], min_index = v;
		}
	}
	return min_index;
}



void prims(int graph[V][V])
{
	int i,c;
	int parent[V];
	int weight[V];
	bool visited[V];

	for (i = 0; i < V; i++)
	{		
		weight[i] = INT_MAX ;
		visited[i] = false;		
	}
	
	weight[0] = 0;
	parent[0] = -1;
	
	for (c = 0; c < V-1 ;c++)
	{
		int u = minWeight(weight , visited);
		visited[u] = true;

		for (int v =0 ; v < V; v++)
		{
			if ( graph[u][v] && visited[v] == false && graph[u][v] < weight[v])
			{	
				parent[v] = u;
				weight[v] = graph[u][v];				
			}
		
		}
	}

	printMST(parent, graph);
}


int main()
{
	int graph[V][V] = { {0,1,0,10,3,0},
		                {1,0,2,3,0,0},
                        {0,2,0,4,0,5},
                        {10,3,4,0,4,1},
                        {3,0,0,4,0,0},
			            {5,0,5,1,0,0}  };
	
	prims(graph);

	return 0;
}