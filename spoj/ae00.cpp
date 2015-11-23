#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i*j <= n && j>=i)
            {
                count++;
            }
        }
    }
    cout << count;
}