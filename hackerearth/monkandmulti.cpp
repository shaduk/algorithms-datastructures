#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N, i = 0;
    cin >> N;
    priority_queue<long long int> mypq;
    while(N--)
    {
    	int input;
    	cin >> input;
    	mypq.push(input);
    	
    	if( i < 2)
    	cout << "-1" << endl;
    	else
    	{
    		long long int x = mypq.top();
    		mypq.pop();
    		long long int y = mypq.top();
    		mypq.pop();
    		long long int z = mypq.top();
    		mypq.push(y);
    		mypq.push(x);
    		cout << x*y*z << endl;
    	}
    	i++;
    }
}
