#include <iostream>
#include <map>
using namespace std;

std::map <long long int, long long int> memo;


int main()
{
    int test = 10;
    while(test--)
    {
        int n;
        cin >> n;
        for(int i = 0; i <= n;i++)
        {
            int sum = memo[i/2] + memo[i/3] + memo[i/4];
            
            if(sum > i)
            {
                memo[i] = sum;
            }
            else
            {
                memo[i] = i;
            }
        }
        cout << memo[n] << endl;
    }
}