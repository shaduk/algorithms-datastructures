#include <iostream>
#include <cmath>
using namespace std;

int nodiv(long long int n)
{
	long long int count = 0;
	for(int i = 1; i < sqrt(n); i++)
	{
		if(count >= 4)
		break;
		if(n%i == 0)
		count= count + 2;
		
	}
	return count;
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	long long int no;
    	cin >> no;
    	if(nodiv(no) < 4)
    	cout << "NO" <<endl;
    	else
    	cout << "YES" << endl;
    }
    return 0;
}
