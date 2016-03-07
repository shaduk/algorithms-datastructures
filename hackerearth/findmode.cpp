/* https://www.hackerearth.com/problem/algorithm/find-mode/# */
#include <iostream>
#include <map>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
    	int N, freq = 0;
    	map<int, int> mymap;
    	scanf("%d", &N);
    	for(int i = 0; i < N; i++)
    	{
    		int inp;
    		scanf("%d",&inp);
    		if(mymap[inp])
    			mymap[inp]++;
    		else
    			mymap[inp] = 1;
    		if(mymap[inp] > freq)
    		freq = mymap[inp];
    	}
    	
    	for (std::map<int,int>::iterator it=mymap.end(); it!=mymap.begin(); --it)
    	{
    		if(it->second == freq)
    		{
    			printf("%d", it->first);
    			printf(" ");
    		}
    	}
    	printf("\n");
    }
    
}
