#include <iostream>

using namespace std;

int main()
{
    int A[2][3];
    A[0][0] = 1; A[0][1]=2; A[0][2]=9; A[1][0] = 4; A[1][1] = 5; A[1][2]=7;A[2][0] = 10; A[2][1] = 15; A[2][2] = 20;
    int (*p)[3] = A;
    cout << p<< "\n";
    cout << *(*A + 1);
    
}