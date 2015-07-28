#include <iostream>
#include <stack>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    char input[410];
    std::stack<char> mystack;
    
    while(testCase--)
    {
        cin>>input;
        int length = strlen(input);
        for(int i = 0;i < length; i++)
        {
            if(isalpha(input[i]))
            {
                cout << input[i];
            }
            
            else if ( input [i] == ')' ) 
            {
                cout << mystack.top();
                mystack.pop();
            }
            
            else if(input[i] != '(')
            {
                mystack.push(input[i]);
            }
           
        }
    cout << endl;
        
    }
    return 0;
}

