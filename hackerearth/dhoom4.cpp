#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   	long long int sval, lval, N;
   	queue<int> myq;
   	cin >> sval >> lval;
   	cin >> N;
   	int Arr[N];
   	int ans[100005];
	memset(ans,-1,sizeof(ans));
   	for(int i = 0; i < N; i++)
   	{
   		long long int input;
   		cin >> input;
   		Arr[i] = input;
   	}
   	
   	myq.push(sval);
   	ans[sval] = 0;
   	while(!myq.empty())
   	{
   		long long int current = myq.front();
   		myq.pop();
   		if(current == lval)
   			break;
   		for(int i = 0; i < N; i++)
   		{
   			long long int to = Arr[i];
   			to = to*current;
   			to = to%100000;
   			if(ans[to] == -1)
   			{
   				ans[to] = ans[current] + 1;
   				myq.push(to);
   			}
   		}
   	}
   	
   	cout << ans[lval] << endl;
   	return 0;
}
