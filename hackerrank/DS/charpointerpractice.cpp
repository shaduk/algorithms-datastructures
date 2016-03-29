#include <iostream>
using namespace std;

void print(char *c)
{
    int i = 0;
    while(c[i] != '\0')
    {
        cout << c[i];
        i++;
    }
    cout << endl;
}

int main()
{
    char C[5] = "shad";
    char *C2;
    C2 = C;
    C2[0] = 'k';
    C[3] = 'g';
    print(C);
}