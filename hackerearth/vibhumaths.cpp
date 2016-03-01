#include <iostream>
using namespace std;

int fact(int n)
{
	if(n == 1)
	return 1;
	else
	return n*fact(n-1);
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
    	int n;
    	cin >> n;
    	int ans = (fact(n)/2 + 1);
    	cout << ans << endl;
    }
}
