/* https://www.hackerrank.com/challenges/pangrams */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string input;
    getline(cin,input);
    bitset<256> t; 
    input.erase(std::remove(input.begin(),input.end(),' '),input.end());
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);
    for (string::size_type i=0; i<input.length(); i++)
        {
        
        if (!t.test(input[i]))
            {
            t.set(input[i]);
            }
        }
    
    
    if(t.count()==26)
        cout << "pangram";
    else
        cout << "not pangram";
    return 0;
}