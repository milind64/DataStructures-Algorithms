#include <bits/stdc++.h>
using namespace std;

void decreaSort(int p[],int w[],int m)
{
    
}

void Knapsack(int p[],int w[],int m)
{
    // cout<<"helloworld";
    decreSort(p,w,m);
}

int main()
{
    int m,t;
    cout<<"Enter the max size = ";
    cin>>m;
    int p[m],w[m];
    t = 0;
    cout<<"Enter the Profit with Weight :\n";
    while(t<m){ 
        cin>>p[m-t]>>w[m-t];
        t++;
    }
    Knapsack(p,w,m);
    return 0;
}