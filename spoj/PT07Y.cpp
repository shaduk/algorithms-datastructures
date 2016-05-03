#include <iostream>
#include <vector>

using namespace std;
vector<int> myvec[1000];
bool visited[1000];

void initialize()
{
    for(int i = 0; i < 1000; i++)
    {
        visited[i] = false;
    }
}

void dfs(int i)
{
    cout << i << endl;
    visited[i] = true;
    for(int j = 0; j < myvec[i].size(); j++)
    {
        if(visited[myvec[i][j]] == false)
        dfs(myvec[i][j]);   
    }
}

int main()
{
    int N, E;
    cin >> N >> E;
    for(int i = 0; i < E; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        myvec[n1].push_back(n2);
        myvec[n2].push_back(n1);
    }
    initialize();
    
    for(int i = 0; i < N; i++)
    {
        if(visited[i] == false)
        dfs(i);
    }
    
}