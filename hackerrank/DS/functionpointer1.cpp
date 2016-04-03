#include <iostream>

using namespace std;

void A()
{
    cout << "Hello" << endl;
}

void B(void (*ptr)()) // function pointer as argument
{
    ptr(); // call-back function that "ptr" points to
}

int main()
{
    void(*p)() = A;
    B(p);
    B(A); // same as above two lines
}