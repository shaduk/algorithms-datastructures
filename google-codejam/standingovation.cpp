#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string data;
        int Smax, standing = 0, req = 0;
        cin >> Smax;
        cin >> data;
        for(int i = 0; i < data.length(); i++)
        {
            int j = data[i] - '0';
            if(standing >= i)
            {
                standing = standing + j;
            }
            else
            {
                req = i - standing;
            }
        }
        cout << req << endl;
    }
}