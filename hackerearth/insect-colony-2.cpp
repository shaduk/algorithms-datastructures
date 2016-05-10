/* https://www.hackerearth.com/problem/algorithm/insect-colony-2/description/# */

#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	int n, r = 0, flag = 0;
    	cin >> n;
    	for(int i = 0; i < n; i++)
    	{
    		int input;
    		cin >> input;
    		r = r^input;
    		if(r%2 == 0)
    		{
    			flag = 1;
    		}
    		else
    		{
    			flag = 0;
    		}
    	}
    	if(flag)
    	cout << "Yes" << endl;
    	else
    	cout << "No" << endl;
    }
    
}
