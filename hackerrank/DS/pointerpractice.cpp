#include <iostream>

using namespace std;

int main()
{
    int a = 1024;
    int *p;
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