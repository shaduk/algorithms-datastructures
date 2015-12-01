#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int num;
        cin >> num;
        std::string s = std::to_string(num);
        while(1==1)
        {
            
            std::string s = std::to_string(i);
            if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
            {
                std::cout << s << endl;
                break;
            }
            i++;
        }
    }
    
}