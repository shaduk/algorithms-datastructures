#include <iostream>
#include <cstring>
using namespace std;



int main()
{
	long long int x, mod, total = 0;
	string line;
    cin >> x;
    cin >> mod;
    cin >> line;
    for(int i = 0; i < line.length(); i++)
    {
   
    	if(line[i] == '1')
    	{
    		total = (total%mod + x%mod)%mod;
    	}
    	long long int temp = ((x%mod)*(x%mod))%mod;
    	x = temp;
    
    }
    cout << total;
}