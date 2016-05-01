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
        int total = 0;
        cin >> n >> c >> m;
        total = n / c;
        if(total > c)
            total = total + total/m;
        cout << total << endl;
    }
    return 0;
}
