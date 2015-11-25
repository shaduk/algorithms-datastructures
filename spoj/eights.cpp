#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long k;
        cin >> k;
        cout << 192+(k-1)*250 << endl;
    }
}