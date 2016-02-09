/* https://www.hackerearth.com/code-monk-c-stl/algorithm/monks-birthday-party/ */

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	int N;
    	set <string> myset;
    	cin >> N;
    	for(int i = 0 ; i < N; i++)
    	{
    		string input;
    		cin >> input;
    		myset.insert(input);
    	}
    	
	    for (std::set<string>::iterator it=myset.begin(); it!=myset.end(); ++it)
	    cout << *it << endl;
    	
    }
    return 0;
}