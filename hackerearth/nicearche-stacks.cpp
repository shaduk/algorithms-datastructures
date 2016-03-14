/* https://www.hackerearth.com/problem/algorithm/nice-arches-1/# */

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int test;
    cin >> test;
    int ans = 0;
    while(test--)
    {
    	stack<int> mystack;
    	
    	string input;
    	cin >> input;
    	for(int i = 0; i < input.length(); i++)
    	{
    		
	    	if(mystack.size() == 0 || mystack.top() != input[i])
		    	mystack.push(input[i]);
	    	else
		    	mystack.pop();
    	
    	}
    	if(mystack.size() == 0)
	    	ans++;
    }
    cout << ans;
}
