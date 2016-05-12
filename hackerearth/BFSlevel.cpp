#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> adj[10000];
bool visited[10000];
int level[10000];
queue<int> myq;

void initialize()
{
	for(int i = 0; i < 10000; i++)
	visited[i] = false;
	
	for(int i = 0; i < 10000; i++)
	level[i] = 0;
}

void bfs(int i)
{
	visited[i] = true;
	myq.push(i);
	while(!myq.empty())
	{
		int current = myq.front();
		myq.pop();
		for(int j = 0; j < adj[current].size(); j++)
		{
			if(!visited[adj[current][j]])
			{
				level[adj[current][j]] = level[current] + 1;
				myq.push(adj[current][j]);
				visited[adj[current][j]] = true;
			}
		}
	}
}

int main()
{
   	int N, x, ans = 0;
   	cin >> N;
   	N = N-1;
   	while(N--)
   	{
   		int a,b;
   		cin >> a >> b;
   		adj[a].push_back(b);
   		adj[b].push_back(a);
   	}
   	cin >> x;
   	initialize();
 	for(int i = 1; i <= 20; i++)
 	{
 		if(!visited[i])
 		bfs(i);
 	}
 	for(int i = 1; i < 10000; i++)
 	{
 		
 		if(level[i] == x-1)
 		ans++;
 	}
 
 	cout << ans;
   	
}
