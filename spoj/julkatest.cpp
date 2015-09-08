#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;


string add(string total,string diff,int lentotal,int lendiff)
{
    string ans = "";
    int carry = 0,sum = 0;
    for(int i= lentotal-1; i>=0; i--)
    {
        sum = int(total[i])-48 + int(diff[i])-48 + carry;
        ans = to_string(sum%10) + ans;
        carry = sum/10;
    }
    ans = to_string(carry) + ans;
    
    return ans;
    
}

int main()
{
    string total,diff;
   
    cin >> total;
    cin >> diff;
    int lentotal = total.length();
    int lendiff = diff.length();
    if(lentotal > lendiff)
    {
        int nzeroes = lentotal - lendiff;
        for(int i=0; i < nzeroes; i++)
        diff = "0" + diff;
    }
    
    cout << add(total,diff,lentotal,lendiff);
}