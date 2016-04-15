#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

bool isMatch(char a, char b)
    {
    if(a == '(' && b == ')')
        return true;
    else if(a == '[' && b == ']')
        return true;
    else if(a == '{' && b == '}')
        return true;
    else
        return false;
}

bool balanced(string s)
    {
    stack<int> mystack;
    for(int i = 0; i < s.length(); i++)
            {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                mystack.push(s[i]);
            else
                {
                if(mystack.empty() || !isMatch(mystack.top(), s[i]))
                    return false;
                else
                    mystack.pop();
            }
       }
    if(mystack.empty())
        return true;
    return false;
}

int main() {
    int test;
    cin >> test;
    while(test--)
        {
        string s;
        cin >> s;
        if(balanced(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
