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
    visited[i] = true;
    for(int j = 0; j < myvec.size(); j++)
    {
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
    dfs(1);
    
}