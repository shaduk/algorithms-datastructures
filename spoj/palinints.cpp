#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int reverse(long long n)
{
    std::string s = std::to_string(n);
    std::reverse(s.begin(), s.end());
    return std::stoi(s);
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long num;
        cin >> num;
        std::string s = std::to_string(num);
        int length = s.length();
        
        if(length%2==0)
        {
            long long firsthalf = num/(pow(10,(length/2)));
            long long secondhalf = num - firsthalf*pow(10,length/2);
            long long answer = firsthalf*pow(10,length/2) + reverse(firsthalf);
            if(answer > num)
            {
                if(test==0)
                cout<<answer;
                else
                cout << answer << endl;
            }
            else
            {
                answer = (firsthalf+1)*pow(10,length/2) + reverse(firsthalf+1);
                if(test==0)
                cout<<answer;
                else
                cout << answer << endl;
            }
            
        }
       
        else
        {
            long long firsthalf = num/(pow(10,(length/2)));
            long long secondhalf = num - firsthalf*pow(10,length/2);
            long long answer = firsthalf*pow(10,(length/2)) + reverse(firsthalf/10);
            if(answer > num)
            {
                if(test==0)
                cout<<answer;
                else
                cout << answer << endl;
            }
            else
            {
                answer = (firsthalf+1)*pow(10,(length/2)) + reverse((firsthalf+1)/10);
                if(test==0)
                cout<<answer;
                else
                cout << answer << endl;
            }
        }
        
    }
    
}