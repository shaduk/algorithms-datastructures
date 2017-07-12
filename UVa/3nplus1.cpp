#include <iostream>
using namespace std;


int CycleLength(long long temp)
{
    int count = 0;
    while(temp > 1)
    {
        if(temp%2 == 0)
            temp = temp/2;
        else
            temp = 3*temp + 1;
            count++;
    }
    return count + 1;
}

int main() 
{
    int p, q;
    while(cin >> p >> q)
    {   
        int ans = 0;
        for(int i = p; i <= q; i++)
        {
            int cal = CycleLength(i);
            if(cal > ans)
            ans = cal;
        }
        cout << p << " " << q << " " << ans << endl;
    }
}