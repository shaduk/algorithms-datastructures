#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int testCases;
   cin >> testCases;
   for(int i = 0; i < testCases; i++)
   {
       int base,index;
       cin>> base;
       cin>>index;
       if(index == 0)
       {
           cout << 1 << endl;
       }
       else {
           int last = base%10;
           if(last == 2 || last == 3 || last == 7 || last == 8)
           {
               cout << int(pow(last, ((index-1)%4) + 1))%10 << endl;
           }
           else if(last ==4 || last ==9)
           {
               cout << int(pow(last, ((index-1)%2) + 1))%10 << endl;
           }
           else
           {
               cout << last << endl;
           }
        }
    }
}