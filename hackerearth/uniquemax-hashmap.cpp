/* https://www.hackerearth.com/problem/algorithm/unique-maximum-number-easy/# */

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, max = -1;
    map<int, int> mymap;
    cin >> n;
    while(n--)
    {
    	int k;
    	cin >> k;
    	if(mymap[k])
    	mymap[k]++;
    	else
    	mymap[k] = 1;
    }
    for (std::map<int,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    {
    	if(it->second == 1 && it->first > max)
    	max = it->first;
    }
    cout << max;
}
