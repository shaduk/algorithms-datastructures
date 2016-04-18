#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int test;
    cin >> test;
    while(test--)
        {
        int N, ans = 0;
        cin >> N;
        int Arr[N], cache[N];
        for(int i = 0; i < N; i++)
            {
            int input;
            cin >> input;
            Arr[i] = input;
        }
        for(int i = 0; i < N; i++)
            {
            int maxi = 0;
            for(int j = i+1; j < N; j++)
                {
               
                if(Arr[j] > Arr[i] && Arr[j]-Arr[i] > maxi)
                    {
                    maxi = Arr[j]-Arr[i];
                }
            }
            ans = ans + maxi;
        }
        cout << ans << endl;
    }
    return 0;
}
