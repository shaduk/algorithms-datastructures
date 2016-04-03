#include <iostream>
#include <stdlib.h>
using namespace std;

void print() {
    cout << "hello" << endl;
}

int* Add(int* a, int* b)
{
    int* c = (int*)malloc(sizeof(int)); 
    *c = *a + *b;
    return c;   // Not a good idea to return address of function to main
}

int main()
{
    int a = 5, b = 2;
    print();
    cout << *(Add(&a, &b)) << endl;
}