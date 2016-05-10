#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int d1, fine = 0;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    if(y1 == y2)
        {
        if(m1 == m2)
            {
            if(d1 <= d2)
                fine = 0;
            else
                fine = 15*(d1-d2);
        }
        else if(m1 < m2)
            fine = 0;
        else
            fine = 500*(m1-m2);
    }
    else if(y1 < y2)
        fine = 0;
    else
        fine = 10000;
    cout << fine << endl;
    return 0;
}
