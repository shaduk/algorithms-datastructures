#include <iostream>
#include <vector>

using namespace std;
vector<int> myvec[10003];

bool visited[10003] = {0};

void initialize(int N)
{
    for(int i = 0; i <= N; i++)
    {
        visited[i] = false;
    }
    
}

int dfs(int i)
{
    visited[i] = true;
    int lenmax = 0;
    if(myvec[i].size() == 0)
        return 0;
    for(int j = 0; j < myvec[i].size(); j++)
    {
        if(visited[myvec[i][j]] == false)
        {
            int len = 1 + dfs(myvec[i][j]);  
            if(len > lenmax)
            {
                lenmax = len;
                
            }
        }
    }
    return lenmax;
}

int main()
{
    int N;
    cin >> N;
    
    for(int i = 0; i < N-1; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        myvec[n1].push_back(n2);
        myvec[n2].push_back(n1);
    }
    
    
    cout << dfs(1) << endl;
    
}