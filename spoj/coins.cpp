#include <iostream>
using namespace std;

int main()
{
    int test = 10;
    while(test--)
    {
        int n;
        cin >> n;
        int sum = (n/4 + n/3 + n/2);
        if(sum > n)
        {
            cout << sum <<endl;
        }
        else
        {
            cout << n << endl;
        }
    }
}