#include <iostream>
#include <string>
using namespace std;

int AlphaCode(string digits, int n)
{
    int count[n+1]; // A table to store results of subproblems
    count[0] = 1;
    count[1] = 1;
 
    for (int i = 2; i <= n; i++)
    {
        count[i] = 0;
 
        // If the last digit is not 0,1 then last digit must add to
        // the number of words
        if (digits[i-1] > '0')
            count[i] = count[i-1];
 
        // If second last digit is smaller than 2 and last digit is
        // smaller than 7, then last two digits form a valid character
        if (digits[i-2] == '1' || (digits[i-2] == '2' && digits[i-1] < '7') )
            count[i] += count[i-2];
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << count[i] << " "; 
    }
    
    return count[n];
}


int main()
{
    int n;
    string input;
    cin >> input;
    while(input[0] != '0')
    {
        n = input.length();
        cout << AlphaCode(input, n) << endl;
        cin >> input;
    }
    
}