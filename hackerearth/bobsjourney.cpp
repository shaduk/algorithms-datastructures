/* https://www.hackerearth.com/problem/algorithm/bobs-journey-5/ */

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int test;
    map<char, int> mymap;
    cin >> test;
    while(test--)
    {
    	int N, flag = 0;
    	mymap.clear();
    	cin >> N;
    	for(int i = 0; i < N; i++)
    	{
    		string city;
    		cin >> city;
    		if(mymap[city[0]])
    		{
    			flag = 1;
    		}
    		else
    		{
    			mymap[city[0]] = 1;
    		}
    	}
    	if(flag == 0)
    	cout << "YES" << endl;
    	else
    	cout << "NO" << endl;
    }
}
