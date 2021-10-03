#include<bits/stdc++.h>
using namespace std;
#define MX 150
vector < int > graph[MX];

void printGraph(vector<int>graph[],int n)
{
    cout<<"The Graph is:"<<endl;
    for(int i = 0 ; i < n ; i++ )
    {
        cout << i << "->" ;
        int len = graph[i].size() ;
        for(int j = 0 ; j < len ; j++ )
        {
            cout << graph[i][j] << " ";
        }
        cout<<endl;
    }
}

int main()
{
    int Vertexes,Edges,source,Destination;
    cout<<"Number of Vertexes:";
    cin>>Vertexes;
    cout<<"Number of Edges:";
    cin>>Edges;
    cout<<"Input Every Edge:";
    for(int i=1; i<=Edges; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    printGraph(graph,Vertexes);
    return 0;
}
