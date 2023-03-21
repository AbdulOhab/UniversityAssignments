///Abdul Ohab
///ID:2019000000061
#include<bits/stdc++.h>
using namespace std;
#define MX 100
vector < int > graph[MX];
int Vertexes,Edges,source,Destination;
int dist[MX];
int color[MX];
int connection[MX];

int  BFS(int source)
{
    queue<int>Q;
    color[source]=1;
    dist[source]=0;
    connection[source]=0;
    Q.push(source);

    while(!Q.empty())
    {
        int node=Q.front();
        Q.pop();

        for (int i = 0; i < graph[node].size(); i++)
        {
            int n=graph[node][i];
            if(color[n]==0)
            {
                color[n]=1;
                connection[n]=node;
                dist[n] = dist[node] + 1;
                Q.push(n);
            }
        }
    }
}

int main()
{
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
    cout<<"Enter Source :";
    cin>>source;
    cout<<"Enter Destination :";
    cin>>Destination;
    BFS(source);
    cout << "Distance is : " << dist[Destination] << endl;

    vector<int>v;
    v.push_back(Destination);
    int tmp=Destination;

    while(!connection[tmp]==0)
    {
        v.push_back(connection[tmp]);
        tmp=connection[tmp];
    }
    reverse(v.begin(),v.end());
    for(int j=0; j<v.size(); j++)
    {
       cout << v[j] << " ";
    }
    return 0;
}

