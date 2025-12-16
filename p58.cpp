#include<iostream>
#include<vector>
#include<queue>
using namespace std;


void bfs(vector<int> adj[],int visited[],int start,int v)
{
    queue<int> q;
    visited[start] = 1;
    q.push(start);

    while(q.empty()!=true)
    {
        int node = q.front();
        cout<<node<<"  ";
        
        q.pop();

        for(int i = 0;i<adj[node].size();i++)
        {
            int neb = adj[node][i];
            if(visited[neb] != 1)
            {
                visited[neb] = 1;
                q.push(neb);
            }
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
            bfs(adj,visited,i,v);
        }
    }
}