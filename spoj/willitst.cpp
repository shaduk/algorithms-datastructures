#include <iostream>
using namespace std;

bool isPowerOfTwo (long long int x)
{
  /* First x in the below expression is for the case when x is 0 */
  return x && (!(x&(x-1)));
}

int main()
{
    long long int n;
    cin >> n;
    if(isPowerOfTwo(n))
    cout << "TAK" << endl;
    else
    cout << "NIE" << endl;
    return 0;
}