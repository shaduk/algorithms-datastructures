#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
/* https://www.hackerrank.com/challenges/even-tree/submissions/code/19453857 */
using namespace std;
vector <int> adj[100];
bool visited[100];
int children[101];

/* Try counting the children. If the subtree has even number of nodes then the edge leading to this subtree can be removed. Otherwise, you have to keep on searching until you find a suitable edge or the entire tree exhausted. As it always can be decomposed into forests of even number of nodes, you will always end up with an answer greater than 1. */


void initialize() {
    for(int i = 0;i <= 10;++i)
    visited[i] = false;
    for(int i = 0; i <= 100; i++)
    {
        children[i] = 1;
    }
}

int dfs(int i)
    {
    int size = 1;
    visited[i] = true;
    
    for(int j = 0; j < adj[i].size(); j++)
        {
        
        if(!visited[adj[i][j]])
            {
            
            children[i] = children[i] + dfs(adj[i][j]);
       }
    }
    return children[i];
}

int main() {
    
    int nodes, edges, x, y, ans = 0;
    cin >> nodes >> edges;
    for(int i = 0; i < edges; i++)
        {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    initialize();
    
    for(int i = 1; i <= nodes; i++)
        {
        if(visited[i] == false)
            dfs(i);
      }
    
    for(int i = 2; i<= nodes; i++)
        {
        if(children[i]%2 == 0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
