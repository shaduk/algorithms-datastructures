#include <iostream>
#include <vector>
using namespace std;


vector<long long int> adj[1000000];
bool visited[1000000];
long long int bananas[1000000];
long long int temp = 0, maxi = 0;

void initialize(long long int N)
{
    for(long long int i = 0;i <= N;++i)
     	bananas[i] = 0;
    for(long long int i = 0;i <= N;++i)
     	visited[i] = false;
    for(long long int i = 0; i <= N; i++)
    	adj[i].clear();
    temp = 0; 
    maxi = 0;
    
}

void dfs(long long int i)
{
   visited[i] = true;
   temp = temp + bananas[i];
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
    	long long int N,M;
		cin >> N >> M;
    	initialize(N);
    	
  		for(long long int i = 0; i < M; i++)
    	{
    		long long int x, y;
    		cin >> x >> y;
    		adj[x].push_back(y);
    		adj[y].push_back(x);
    	}
    	
    	for(long long int i = 1; i <= N; i++)
    	{
    		long long int a; 
    		cin >> a;
    		bananas[i] = a;
    	}
    	
    	for(long long int i = 1; i <= N; i++)
    	{
    		if(visited[i] == false)
    		{
    			dfs(i);
    			if(temp > maxi)
    			{
    				maxi = temp;
    			}
    			temp = 0;
    		}
    	}
    	cout << maxi << endl;
    	
    }
}
