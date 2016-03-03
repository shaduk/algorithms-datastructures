/* https://www.hackerearth.com/problem/algorithm/tournament-easy/description/# */

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N, tempval = -1, c = 0;
    string tempkey;
    map<string, int> mymap;
    vector <string> myvec;
    cin >> N;
    while(N--)
    {
    	string s1, s2;
    	cin >> s1 >> s2;
    	if(mymap[s1])
    	mymap[s1]++;
    	else
    	mymap[s1] = 1;
    	
    	if(mymap[s2])
    	mymap[s2]++;
    	else
    	mymap[s2] = 1;
    }
    
    for (map<string,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    {
    	if(it->second > tempval)
    	{
    		tempkey = it->first;
    		tempval = it->second;
    	}
    }
    
    for (map<string,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    {
    	if(it->second == tempval)
    	{
    		 myvec.push_back(it->first);
    	}
    }
    cout << myvec.size() << endl;
    for(int i = 0; i < myvec.size(); i++)
    cout << myvec[i] << endl;
    
}
