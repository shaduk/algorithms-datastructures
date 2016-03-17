/* https://www.hackerearth.com/code-monk-heaps-and-priority-queues/algorithm/monk-and-champions-league/# */

#include <iostream>
#include <queue>
using namespace std;

int main()
{
   	int M, N, ans = 0;
   	cin >> M >> N;
   	priority_queue<int> mypq;
   	
   	for(int i = 0; i < M; i++)
   	{
   		int input;
   		cin >> input;
   		mypq.push(input);
   	}
   	for(int i = 0; i < N; i++)
   	{
   		ans = ans + mypq.top();
   		int temp = mypq.top();
   		mypq.pop();
   		mypq.push(temp-1);
   	}
   	cout << ans << endl;
}
