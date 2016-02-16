/* https://www.hackerearth.com/code-monk-hashing/algorithm/monk-and-the-collision/ */

#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	long long int N, col = 0;
    	cin >> N;
    	bool hash[10];
    	
    	for(long long int i = 0; i < 10; i++)
    	{
    		hash[i]	= false;
    	}
    	
    	for(int i = 0; i < N; i++)
    	{
    		long long int input;
    		cin >> input;
    		if(hash[input%10] == false)
    		{
    			hash[input%10] = true;
    		}
    		else
    		{
    			col++;
    		}
    	}
    	
    	cout << col << endl;
    }
}
