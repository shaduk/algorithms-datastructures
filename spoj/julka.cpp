#include <iostream>
using namespace std;



int main()
{
    int testCases = 10;
    while(testCases--)
    {
        int x,y,total,diff;
        cin >> total;
        cin >> diff;
        x = (total + diff)/2;
        y = total - x;
        cout << x << "\n";
        cout << y << "\n";
    }
    
}