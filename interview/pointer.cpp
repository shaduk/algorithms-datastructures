#include <iostream>

using namespace std;

int main()
{
    int A[4];
    A[0]=2; A[1]=9; A[2] = 4; A[3] = 5;
    int *p = A;
    cout << p<< "\n";
    cout << *p;
    
}