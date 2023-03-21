#include<bits/stdc++.h>
using namespace std;

vector < int > graph[100];
int V, E, S, D ;

bool vis[100];
int dist[100];
int decoy[100];

void BFS()
{
    queue < int > Q ;
    vis[S] = 1;
    dist[S] = 0;
    decoy[S] = 0;
    Q.push(S);
    while(!Q.empty())
        {
            int current_node = Q.front();
            Q.pop();
            for(int i = 0;i < graph[current_node].size();i++)
            {
                int next = graph[current_node][i];
             //   printf("\n %d \n",next);

                if(vis[next] == 0)
                {
                    vis[next] = 1;
                    decoy[next] = current_node ;
                    dist[next] = dist[current_node]+1;
                    Q.push(next);
                }
            }

        }

}


int main()
{
    cout << "Number of Vertexes: ";
    cin >> V ;
    cout << "Number of edges: ";
    cin >> E ;
    cout << "Input every edge:\n";
    for(int i=1;i<=E;i++)
    {
        int u , v ;
        cin >> u >> v ;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout << "Enter Source : ";
    cin >> S ;
    cout << "Enter Destination: ";
    cin >> D ;

    BFS();
    cout << "shortest path :";
    int temp = D;
         cout << " " << D ;
    while(!decoy[temp] == 0)
    {

        cout << "  <-  ";
        cout << decoy[temp] ;
        temp = decoy[temp];

    }
    cout << "\n" << endl;

        cout << "Minimum Distance from source  " << S << " to Destination  " << D << " is ::: "<<  dist[D] << endl;

    return 0;
}

