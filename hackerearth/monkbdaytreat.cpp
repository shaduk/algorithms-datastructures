#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[10000];
bool visited[10000];
int temp = 0, mini = 1000;

void dfs(int i)
{
	visited[i] = true;
	temp = temp + 1;
	for(int j = 0; j < adj[i].size(); j++)
	{
		if(visited[adj[i][j]] == false)
		dfs(adj[i][j]);
	}
}

void initialize()
{
	for(int i = 0;i < 10000;++i)
	     visited[i] = false;
}

int main()
{
    int N,D;
    cin >> N >> D;
    initialize();
    for(int i = 1; i <= D; i++)
    {
    	int a,b;
    	cin >> a >> b;
    	adj[a].push_back(b);
    }
    
    for(int i = 1; i <= N; i++)
    {
    	
    	if(visited[i] == false)
    	{
    		dfs(i);
    		if(temp <= mini)
    		{
    			mini = temp;
    		}
    		initialize();
    		temp = 0;
    	}
    	
    }
    cout << mini << endl;
}