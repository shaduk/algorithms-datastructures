#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
    	int x,n,count;
    	cin >> n;
    	cin >> x;
    
    	vector<int> values;
    	while(n--)
    	{
    		int input;
    		cin >> input;
    		values.push_back(input);
    	}
    	
    	for(int i = 0;i <= values.size()-3; i++)
    	{
    		
    		if(values[i] + values[i+1] + values[i+2] == x)
    		{
    			cout << "YES";
    			count+=1;
    		}
    	}
    	if(count == 0)
    	{
    	    cout << "NO";
    	}
    }
}
