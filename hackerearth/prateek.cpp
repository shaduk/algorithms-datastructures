#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
    	long long int x,n,count=0;
    	cin >> n;
    	cin >> x;
    
    	vector<long long int> values;
    	while(n--)
    	{
    		long long int input;
    		cin >> input;
    		values.push_back(input);
    	}
    	
    	for(int i = 0;i < values.size(); i++)
    	{
    		long long int sum = values[i];
    		if(sum == x)
    		{
    				cout << "YES" << endl;
    				count+=1;
    				break;
    		}
    		else
    		{
	    		for(int j = i+1; j < values.size(); j++)
	    		{
	    			sum = sum + values[j];
	    			if(sum == x)
	    			{
	    				cout << "YES" << endl;
	    				count+=1;
	    				break;
	    			}
	    			else if(sum > x)
	    			break;
	    		}
    		}
    		if(count != 0)
    		{
    	    	break;
    		}
    	}
    	if(count == 0)
    	{
    	    cout << "NO" << endl;
    	}
    }
}
