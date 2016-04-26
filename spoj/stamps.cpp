#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

struct myclass {
  bool operator() (int i,int j) { return (i>j);}
} myobject;

int main()
{
    int test;
    cin >> test;
    for(int k = 1; k <= test; k++)
    {
        int a, b;
        cin >> a >> b;
        vector<int> s(b);
        for(int i = 0; i < b; i++)
        {
            int input;
            cin >> input;
            s[i] = input;
        }
        std::sort (s.begin(), s.end(), myobject);
        int sum = 0, no = 0;
        for(int i = 0; i < b; i++)
        {
            sum = sum + s[i];
            if(sum >= a)
            {
                no = i+1;       
                break;
            }
        }
        cout << "Scenario #" << k << ":" << endl;
        if(no)
            cout << no;
        else
            cout << "impossible";
        cout << endl;
        cout << "\n";
    }
    
    
}