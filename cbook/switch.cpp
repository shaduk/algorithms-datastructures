#include "std_lib_facilities.h"

int main()

{
    cout << "Please enter a number ";
    char c;
    cin >> c;
    switch(c) {
        case '0': case '2' : case '4' : case '6' : case '8':
            cout << "is even \n";
            break;
            case '1' : case '3' : case '5' : case '7': case '9':
            cout << "is odd \n";
            break;
        default:
            cout << "is not a digit \n";
            break;
            
            
    }
}