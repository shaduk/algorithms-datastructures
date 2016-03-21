#include <iostream>
using namespace std;

void sizes(char ch, int i, int* p)
{
cout << "the size of char is " << sizeof(char) << ' ' << sizeof (ch) << '\n';
cout << "the size of int is " << sizeof(int) << ' ' << sizeof (i) << '\n';
cout << "the size of int* is " << sizeof(int*) << ' ' << sizeof (p) << '\n';
}

int main()
{
    int a = 5;
    int *p = &a;
    sizes('a', a, p);
}
