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
        int n, n3 = 0, n5 = 0;
        cin >> n;
        n3 = n%3;
        n5 = n - n3;
        while(n3%5 != 0 || n5%3 != 0)
            {
            n3 = n3 + 3;
            n5 = n5 - 3;
        }
        if(n3 < 0 || n5 < 0)
            {
           cout << -1 << endl;
        }
        else
            {
            while(n5)
                {
                cout << "5";
                n5--;
            }
            while(n3)
                {
                cout << "3";
                n3--;
            }
            cout << endl;
        }
    }
    return 0;
}
