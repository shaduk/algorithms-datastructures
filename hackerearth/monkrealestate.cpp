/* https://www.hackerearth.com/code-monk-graph-theory-i/algorithm/monk-in-the-real-estate/ */

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	int N;
    	set <int> myset;
    	cin >> N;
    	for(int i = 0; i < N; i++)
    	{
    		int a,b;
    		cin >> a >> b;
    		myset.insert(a);
    		myset.insert(b);
    	}
    	
    	cout << myset.size() << endl;
    }
}
