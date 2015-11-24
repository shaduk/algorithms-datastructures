#include <iostream>
#include <map>
using namespace std;

static long long memo[1000000];


long long f(long long n)
{
    long long sum;
    if(memo[n]>=0) return memo[n];
    if(n==0)
    sum = 1;
    else
    {
        sum = f(n/2) + f(n/3) + f(n/4);
        if(n > sum)
        sum = n;
        else
        sum = sum;
    }
    
    memo[n] = sum;
    return sum;
}

int main()
{
    int test = 10;
    while(test--)
    {
        for (int i=0; i<1000000; i++)
		  memo[i]=-1;
        
        cout << f(12) << endl;
    }
}