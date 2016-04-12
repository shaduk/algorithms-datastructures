/* https://www.hackerrank.com/challenges/manasa-and-stones */

#include <cmath>
#include <cstdio>
#include <vector>
#include <stdlib.h> 
#include <time.h>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int test;
    cin >> test;
    while(test--)
        {

        int n, a, b;
        cin >> n >> a >> b;
        auto result = std::minmax({a,b});
        int mini = result.first*(n-1);
        int maxi = result.second*(n-1);
        int diff = result.second - result.first;
        if(a == b){
                cout << mini << endl;
                
            }
        else {
        for(int i = 0; i < n; i++)
            {
            cout << mini << " ";
            mini = mini + diff;
        }
       cout << endl;
        }
    }
    return 0;
}
