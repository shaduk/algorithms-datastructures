/* https://www.hackerearth.com/problem/algorithm/vada-pav-list-3/# */
#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> mymap;
    while(n--)
    {
    	char input[8];
    	scanf("%10s", input);
    	mymap[input] = 1;
    }
    cout << mymap.size() << endl;
    for (std::map<string,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    printf("%s\n",(it->first).c_str());
}
