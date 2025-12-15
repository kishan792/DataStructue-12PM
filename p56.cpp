#include<iostream>
using namespace std;


void dfs(int adjMat[][10],int visited[],int start,int v)
{
    visited[start] = 1;
    cout<<start<<"   ";

    for(int i = 0;i<v;i++)
    {
        if(adjMat[start][i] == 1 && visited[i] != 1)
        {
            dfs(adjMat,visited,i,v);
        }
    }
}


int main()
{
    int v = 9;
    int e = 11;

    int edges[e][2] = {{3,8},{3,4},{5,4},{2,7},{0,2},{1,0},{2,4},{8,5},{0,4},{5,7},{4,6}};

    int adjMat[10][10];

    for(int i = 0;i<e;i++)
    {
        int u  = edges[i][0];
        int v = edges[i][1];

        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }

    int visited[v] = {0};

    dfs(adjMat,visited,0,v);
}