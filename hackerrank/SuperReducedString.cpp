/* https://www.hackerrank.com/challenges/reduced-string */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string input, ans;
    cin >> input;
    if(input.size() == 1)
       {
        cout << input;
        return 0;
    }
    int i = 1;
    while(i < input.size())
        {
        if(input[i] == input[i-1])
            {
            input.erase(i-1,2);
            i--;
        }
        else
            {
            i++;
        }
    }
    if(input.size() != 0)
        cout << input;
    else
        cout << "Empty String";
    return 0;
}
