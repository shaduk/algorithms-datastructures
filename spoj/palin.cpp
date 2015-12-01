#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <cstring>
using namespace std;

string reverse(string s)
{
    std::reverse(s.begin(), s.end());
    return s;
}

string addone(string s)
{
    int carry = 1;
    reverses = reverse(s);
    for(int i = 0; i < reverses.length(); i++)
    {
        reverses[i] = to_string(stoi(reverses[i]) + carry);
        if()
    }
    
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string num;
        cin >> num;
        
        int length = num.length();
        
        if(length%2==0)
        {
            string firsthalf = num.substr(0,(length/2));
            string secondhalf = num.substr((length/2),length);
            cout << firsthalf << endl;
            cout << secondhalf << endl;
            string answer = firsthalf + reverse(firsthalf);
            cout << answer << endl;
            
            if(answer.compare(num) >= 0)
            {
                cout << num << endl;
            }
            
            
            
        }
       

        
    }
    
}