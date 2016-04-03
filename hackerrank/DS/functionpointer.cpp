#include <iostream>

using namespace std;

int Add(int a, int b)
{
    return a+b;
}
int main()
{
    int c, d;
    int (*p)(int, int);
    p = &Add;
    d = Add; //This also works
    c = (*p)(2, 3);

    
}