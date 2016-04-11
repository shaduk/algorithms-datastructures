
/* https://www.hackerrank.com/challenges/find-digits/submissions/code/19205834 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n, count = 0, k;
        cin >> n;
        k = n;
        while(k != 0)
            {
            int dig = k%10;
            if(dig != 0 && n%dig == 0)
                count++;
            k = k/10;
        }
        cout << count << endl;
    }
    return 0;
}
