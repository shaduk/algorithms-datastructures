#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, int> mymap;
	int N, tempval = 0;
	string tempkey;
    cin >> N;
    while(N--)
    {
    	string lap;
    	cin >> lap;
    	if(mymap[lap])
    	mymap[lap] = mymap[lap] + 1;
    	else
    	mymap[lap] = 1;
    }
    for (map<string,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    {
    	if(it->second > tempval)
    	{
    		tempkey = it->first;
    		tempval = it->second;
    	}
    }
    cout << tempkey << endl;
}
