#include <iostream>
#include <stack>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int x,y;
        cin>> x >>y;
        if(x%2!=0 && y%2!=0 && ((x-y)==2 || x-y==0))
        {
            cout << x+y-1<<"\n";
        }
        else if(x%2==0 && y%2==0 && ((x-y)==2 || x-y==0))
        {
            cout << x+y <<"\n";
        }
        else
        {
           
            cout<<"No Number\n";
        }
        
    }
    return 0;
}
