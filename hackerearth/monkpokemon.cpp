#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	long long int N ,ans = 0;
    	vector<long long int> hash[1000];
    	cin >> N;
    	for(int i = 0; i < N; i++)
    	{
    	    long long int a, b, c = 0;
    		cin >> a >> b;
    		hash[a%1000].push_back(a);
    		for(int j = 0; j < hash[b%1000].size(); j++)
    		{
    			if(b == hash[b%1000][j])
    			{
    				hash[b%1000].erase(hash[b%1000].begin() + j);
    				c++;
    				break;
    			}
    		}
    		if(c == 0)
    		{
    			ans++;
    		}
    	}
    	cout << ans << endl;
    }
}
