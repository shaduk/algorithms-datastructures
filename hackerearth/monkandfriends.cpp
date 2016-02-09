/* https://www.hackerearth.com/code-monk-c-stl/algorithm/monk-and-his-friends/ */

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	long long int N, M;
    	set <long long> s;
    	cin >> N >> M;
    	for(int i = 0; i < N; i++)
    	{
    		long long int input;
    		cin >> input;
    		s.insert(input);
    		
    	}
    	for(int i = 0; i < M; i++)
    	{
    		long long int input;
    		cin >> input;
    		if(s.count(input) == 0)
    		{
    			s.insert(input);
    			cout << "NO" << "\n";
    		}
    		else
    		{
    			cout << "YES" << "\n";
    		}
    	}
    }
}