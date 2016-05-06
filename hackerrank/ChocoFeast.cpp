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
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int choc = 0, total = 0, wrap = 0;
        choc = n / c;
        wrap = choc;
        total = total + choc;
        while(wrap >= m)
            {
            choc = wrap / m;
            total = total + choc; 
            wrap = choc + wrap % m;
        }
        cout << total << endl;
    }
    return 0;
}
