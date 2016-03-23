#include <iostream>
#include <map>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	int sum = 0, sub, count = 0;
    	cin >> sub;
    	map<int, int> mymap;
    	for(int i = 0; i < sub; i++)
    	{
    		int a, b;
    		cin >> a >> b;
    		
    		if(b == 1)
    		{
    			
    			if(!mymap[a])
    			{
    				
    				count++;
    				mymap[a] = 1;
    			}
    		}
    		else
    		{
    			count = 0;
    		}
    		
    		if(count > sum)
    			sum = count;
    		
    	}
    	cout << sum << endl;
    }
}
