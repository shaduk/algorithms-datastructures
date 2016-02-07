#include <iostream>
#include <cstring>
using namespace std;


int Mod(int x, int n, int mod)
{
	if(n == 0)
	return 1;
	else if(n%2 == 0)
	{
		int y = Mod(x, n/2, mod);
		return y*y;
	}
	else
	{
		return ((x%mod) * Mod(x, n-1, mod) % mod);
	}
}

int main()
{
	int x, mod, n = 1, total = 0;
	string line;
    cin >> x;
    cin >> mod;
    cin >> line;
    for(int i = 0; i < line.length(); i++)
    {
    	
    	if(line[i] == '1')
    	{
    		total = (total + Mod(x, n, mod))%mod;
    	}
    	n = n * 2;
    }
    cout << total;
}
