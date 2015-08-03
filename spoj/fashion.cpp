#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
     int testcases;
     cin>>testcases;
     while(testcases--)
    {
        int n,bonds=0;
        cin >> n;
        int male[n],female[n];
        for(int i=0;i < n; i++)
        {
            cin >> male[i];
     
        }
        for(int i=0;i < n; i++)
        {
            cin >> female[i];
     
        }
     
        sort(male,male + n);
        sort(female,female + n);
     
        for(int i=0;i < n; i++)
        {
            bonds = bonds + male[i]*female[i];
        }
        cout << bonds <<"\n";
     }
}