#include <iostream>
using namespace std;

int mod(int n)
{
    if(n>0)
    return n;
    else
    return -n;
}

int main()
{
    int testcase=0,inputs[testcase],sum=0,ans=0,avg=0;
    
    while(testcase!= -1)
    {
    cin >> testcase;
    if(testcase == -1)
    {
        return -1;
    }
    
    for(int i = 0; i < testcase;i++)
    {
        cin >> inputs[i]; 
    }
    
    for(int i = 0; i < testcase;i++)
    {
        sum = sum + inputs[i]; 
    }

    avg = sum/testcase;
    
    
    if(sum%testcase!=0)
    {
        cout << -1 << "\n";
    }
    else
    {
        for(int i = 0; i < testcase;i++)
        {
            if(inputs[i]>avg)
            {
                 ans = ans + (inputs[i]-avg);
            }
        }
        cout << ans << "\n";
    }
    
    }
    return 0;
}