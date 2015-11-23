#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;
    cout << endl;
    while(test--)
    {
        long long int sum=0,students,value;
        cin >> students;
        for(long long int i = 0;i < students; i++)
        {
            cin >> value;
            sum = (sum%students + value%students)%students;
           
           
        }
        if(sum == 0)
        {
            cout << "YES" << endl;
        
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}