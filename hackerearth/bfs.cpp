#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector <int> adj[10000];
queue <int> q;
bool visited[10000];

int main()
{
    int N, E, v;
    cin >> N >> E;
    
    for(int i = 0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int source = 1;
    q.push(source);
    visited[source] = true;
    while(!q.empty())
    {
        v = q.front();
        cout << v << endl;
        q.pop();
        for(int i = 0; i < adj[v].size(); i++)
        {
            if(visited[i] == false)
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
    
}