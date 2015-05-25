#include "std_lib_facilities.h"

int main() // C++ programs start by executing the function main 
{ 
    int a,b;
    string i;
    cin>>i;
    while(i!="|")
    {
        cin>>a>>b;
    
        if(a>b)
        {
            cout<<"The smaller value is "<<b<<"\n";
            cout<<"The larger value is "<<a<<"\n";
        }
        else if(b>a)
        {
            cout<<"The smaller value is "<<a<<"\n";
            cout<<"The larger value is "<<b<<"\n";
        }
        else
        {
            cout<<"The numbers are equal";
        }
        cin>>i;
    }
    
}