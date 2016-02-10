/* https://www.hackerearth.com/code-monk-c-stl/algorithm/monk-and-the-magical-candy-bags/ */

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	long long int N, K, ans = 0;
    	cin >> N >> K;
    	priority_queue<long long int> pq;
    	for(int i = 0; i < N; i++)
    	{
    		long long int input;
    		cin >> input;
    		pq.push(input);
    	}
    	for(int i = 0; i < K; i++)
    	{
    		ans = ans + pq.top();
    		long long int push = pq.top()/2;
    		pq.pop();
    		pq.push(push);
    	}
    	cout << ans << endl;
    	
    	
    }
}
