#include <iostream>

using namespace std;

int main()
{
    int a = 1024;
    int B[4][5];
    int *p, (*d)[3] = B;
    p = &a;
    cout << p << " " << *p << endl;
    int **q;
    q = &p;
    cout << q << " " << *q << endl;
    int ***r;
    r = &q;
    cout << r << " " << *r << endl;
    ***r = *p + 2;
    cout << a << endl;
    
}