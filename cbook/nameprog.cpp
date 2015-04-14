#include "std_lib_facilities.h"

int main() // C++ programs start by executing the function main 
{ 
    cout << "Please enter name\n";
    string first_name;
    cin >> first_name;
    cout << "Hello, " << first_name << "!\n";
    keep_window_open();
    return 0; 
    
    
}