#include <iostream>
#include <vector>
using namespace std;


vector<long long int> adj[1000000];
bool visited[1000000];

void initialize()
{
    for(int i = 0;i < 10;++i)
     	visited[i] = false;
    
}

void dfs(int i)
{
   visited[i] = true;
   
   for(int j = 0; j < adj[i].size(); j++)
   {
       if(visited[adj[i][j]] == false)
    	  dfs(adj[i][j]);
   }
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	int N,M, connected = 0;
		cin >> N >> M;
    	initialize();
    	
  		for(int i = 0; i < M; i++)
    	{
    		int x, y;
    		cin >> x >> y;
    		adj[x].push_back(y);
    		adj[y].push_back(x);
    	}
    
    	
    	for(int i = 1; i <= N; i++)
    	{
    		if(visited[i] == false)
    		{
    			dfs(i);
    			connected++;
    		}
    	}
    	cout << connected << endl;
    }
}