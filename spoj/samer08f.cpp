#include <iostream>
#include <stack>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    while(true)
    {
        int x,ans=0;
        cin>> x;
        if(x==0)
        {
            break;
        }
        for(int i=1; i<=x; i++)
        {
            ans = ans + i*i;
        }
        cout << ans<<"\n";
    }
    return 0;
}