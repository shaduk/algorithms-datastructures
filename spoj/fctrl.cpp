#include<iostream>
using namespace std;

int nozeroes(int number)
{
    int ans=0,i = 5;
    while(i<=number)
    {
        ans = ans + number/i;
        i = i*5;
    }
   
   return ans;
}

int main()
{
int i,cases,n1;
   cin >> cases;
    for(i=0;i<cases;i++)
        {	
            cin >> n1;
            cout << nozeroes(n1) << "\n";
            
        }
    return 0;
}