#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, sumi = 0, j = 0;
    cin >> N;
    for(int i = 0; i < N; i++)
        {
        int a, b;
        cin >> a >> b;
        sumi = sumi + (a-b);
        if(sumi < 0)
            {
            sumi = 0;
            j = i + 1;
        }
    }
    cout << j <<endl;
    return 0;
}

