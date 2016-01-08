/* https://www.hackerrank.com/challenges/sherlock-and-squares */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int test;
    cin >> test;
    while(test--)
        {
        int start,end,answer=0,i;
        cin >> start;
        cin >> end;
        i = start;
        while(i <= end)
        {
            double square = sqrt(i);
            if(floor(square) == square)
                { 
                answer = answer + 1;
                i = pow((square+1),2);
                }
            else{
            i = i + 1;
            }
        }
        cout << answer <<endl;
    }
    return 0;
}