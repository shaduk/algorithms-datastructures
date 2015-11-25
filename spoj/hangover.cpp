#include <iostream>
#include <string>
using namespace std;
int main()
{
    float input;
    cin >> input;
    while(input != 0.0)
    {
        float sum = 0.0;
        int ans;
        for(int i = 2; i <= 300; i++)
        {
            sum = sum + 1/float(i);
            if(sum >= input)
            {
                ans = i;
                break;
            }
        }
        cout << (ans-1)<<" card(s)" << endl;
        cin >> input;
    }
}