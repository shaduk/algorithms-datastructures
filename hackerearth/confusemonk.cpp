/* https://www.hackerearth.com/code-monk-number-theory-i/algorithm/the-confused-monk/editorial/ */

#include <iostream>
#include <math.h>
using namespace std;

long long int GCD(long long int A, long long int B) {
	if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

int main()
{
    int test;
    long long monk = pow(10, 9) + 7, g = 0, f = 1, ans = 1;
    cin >> test;
    while(test--)
    {
    	long long input;
    	cin >> input;
    	g = GCD(g, input);
    	f = (f*input)%monk;
    }
    for(int i = 0; i < g; i++)
    {
    	
    	ans= (f * ans)%monk;
    }
    cout << ans;
}
