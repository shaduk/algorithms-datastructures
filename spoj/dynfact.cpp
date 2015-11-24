#include <iostream>
using namespace std;

int memo[1000] = {0};

int fact(int n)
{
    int ans;
    if(memo[n] != 0)
    {
        return memo[n];
    }
    if(n <= 1)
    {
    ans = 1;
    }
    else
    {
    ans = n*fact(n-1);
    memo[n] = ans;
    }
    return ans;
}

int main()
{
    cout << fact(11) << endl;
}