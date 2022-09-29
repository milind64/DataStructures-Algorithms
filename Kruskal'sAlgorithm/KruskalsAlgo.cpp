// * In this code we'll be implementing the Kruskal's Algorithm to take out the MST(Minimum Spanning Tree)

#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
#define V 6

display(graph[V])
{

}

void kruskal(int graph[V][V])
{
    int key[V];
    bool visited[V];

    for(int i =0;i<V;i++)
    {   
        key[V] = INT_MAX;
        visited[i] = false; 
    }
    
}


int main()
{
    graph[V][V] = {     { INT_MAX, 2, INT_MAX, 6, INT_MAX },
                        { 2, INT_MAX, 3, 8, 5 },
                        { INT_MAX, 3, INT_MAX, INT_MAX, 7 },
                        { 6, 8, INT_MAX, INT_MAX, 9 },
                        { INT_MAX, 5, 7, 9, INT_MAX }
                  };

    kruskal(graph);

    return 0;
}
