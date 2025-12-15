#include<iostream>
#include<vector>
using namespace std;


void dfs(vector<int> adj[],int visited[],int start,int v)
{
    visited[start] = 1;
    cout<<start<<"   ";

    for(int i = 0;i<adj[start].size();i++)
    {
        int neb = adj[start][i];
        if(visited[neb] != 1)
        {
            dfs(adj,visited,neb,v);
        }
    }
}


int main()
{
    int v = 11;
    int e = 12;

    int edges[e][2] = {{3,8},{3,4},{5,4},{2,7},{0,2},{1,0},{2,4},{8,5},{0,4},{5,7},{4,6},{9,10}};

    vector<int> adj[v];

    for(int i = 0;i<e;i++)
    {
        int u  = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);

    }
   
    int visited[v] = {0};

    for(int i = 0;i<v;i++)
    {
        if(visited[i] != 1)
        {
            dfs(adj,visited,i,v);
        }
    }
}