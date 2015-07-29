#include <iostream>
#include <stack>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    while(true)
    {
        int x,y,z;
        cin>> x>>y>>z;
        if(x==0 && y==0 && z==0)
        {
            break;
        }
        
        else if(y-x == z-y)
        {
            cout<<"AP " <<2*z-y<< "\n";
        }
        else if(y/x == z/y && y%x == z%y)
        {
            cout<<"GP "<< z*z/y << "\n";
        }
        
        
    }
}