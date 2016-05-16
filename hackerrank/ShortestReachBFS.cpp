#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

bool visited[1001];
int distant[1001];
vector<int> adj[1001];

void bfs(int s)
    {
    queue<int> myq;
    myq.push(s);
    visited[s] = true;
    distant[s] = 0;
    while(!myq.empty())
        {
        int current = myq.front();
        myq.pop();
        for(int i = 0; i < adj[current].size(); i++)
            {
            if(!visited[adj[current][i]])
                {
                myq.push(adj[current][i]);
                distant[adj[current][i]] = distant[current]+1;
                visited[adj[current][i]] = true;
            }
        }
    }
}   

void initialize()
    {
    for(int i = 0; i < 1001; i++)
        {
        visited[i] = false;
    }
    for(int i = 0; i < 1001; i++)
        {
        adj[i].clear();
    }
    for(int i = 0; i < 1001; i++)
       {
        distant[i] = 0;
    }
}

int main() {
    int test;
    cin >> test;
    while(test--)
        {
        initialize();
        int N, M, c;
        cin >> N >> M;
        for(int i = 0; i < M; i++)
            {
            int a,b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        cin >> c;
        bfs(c);
        for(int i = 1; i <= N; i++)
            {
            if(c != i)
                {
                if(distant[i]!=0)
                    cout << 6*distant[i] << " ";
                else
                    cout << -1 << " ";
            }
        }
        cout << endl;
        
    }
    return 0;
}
