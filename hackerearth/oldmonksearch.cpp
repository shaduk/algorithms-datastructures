/* https://www.hackerearth.com/code-monk-searching/algorithm/the-old-monk/ */


#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	int N, monk = 0;
    	cin >> N;
    	long long int A[N], B[N];
    	for(int i = 0; i < N; i++)
    	{
    		long long int input;
    		cin >> input;
    		A[i] = input;
    	}
    	
    	for(int i = 0; i < N; i++)
    	{
    		long long int input;
    		cin >> input;
    		B[i] = input;
    	}
    	
    	for(int i = 0; i < N; i++)
    	{
    		int start = i;
    		int end = N - 1, mid;
    	
    		while(start <= end)
    		{
    			mid = start + (end - start) / 2;
    			if(B[mid] >= A[i])
    			{
    				if(mid - i > monk)
    				{
    					monk = mid - i;
    				}
    				start = mid + 1;
    			}
    			else{
    				end = mid - 1;
    			}
    			
    		
    		}
    	}
    	cout << monk << endl;
    	
    }
}
