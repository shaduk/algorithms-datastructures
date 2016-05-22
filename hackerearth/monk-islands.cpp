#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> adj[100000];
bool visited[100000];
int depth[100000];

void initialize()
{
	for(int i = 0; i < 100000; i++)
	adj[i].clear();
	
	for(int i = 0; i < 100000; i++)
	visited[i] = false;
	
	for(int i = 0; i < 100000; i++)
	depth[i] = 0;
}

void bfs(int s)
{
	queue<int> myq;
	myq.push(s);
	while(!myq.empty())
	{
		int current = myq.front();
		myq.pop();
		for(int i = 0; i < adj[current].size(); i++)
		{
			if(!visited[adj[current][i]])
			{
				visited[adj[current][i]] = true;
				myq.push(adj[current][i]);
				depth[adj[current][i]] = depth[current] + 1;
			}
		}
	}
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	initialize();
    	int N, M;
    	cin >> N >> M;
    	for(int i = 0; i < M; i++)
    	{
    		int a,b;
    		cin >> a >> b;
    		adj[a].push_back(b);
    		adj[b].push_back(a);
    	}
    	bfs(1);
    	cout << depth[N] << endl;
    }
}