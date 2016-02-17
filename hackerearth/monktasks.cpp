/* https://www.hackerearth.com/code-monk-hashing/algorithm/monk-and-tasks/ */

#include <iostream>
#include <bitset>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int test;
    vector <long long int> hash[64];
    cin >> test;
    while(test--)
    {
    	int N;
    	cin >> N;
    	
    	for(int i = 0; i <= 64; i++)
    	{
    		hash[i].clear();
    	}
    	
    	for(int i = 0; i < N; i++)
    	{
    		long long int input;
    		cin >> input;
    		std::bitset<64> binary = std::bitset<64>(input);
    		
    		hash[binary.count()].push_back(input);
    	}
    
    	for(long long int i = 0; i < 64; i++)
    	{
    		for(long long int j = 0; j < hash[i].size(); j++)
    		{
    			cout << hash[i][j] << " "; 
    		}
    	}
    	cout << endl;
    	
    }
}
