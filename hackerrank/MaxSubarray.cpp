#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int MaxSubArray(int a[], int size)
    {
    int max1 = a[0], max2 = a[0];
    for(int i = 1; i < size; i++)
        {
        max1 = max1 + a[i];
        if(max1 < a[i])
            max1 = a[i];
        if(max1 > max2)
            {
            max2 = max1;
        }
    }
    return max2;
}

int Max(int a[], int size)
    {
    
    int maxi = 0, maxele = a[0];
    for(int i = 0; i < size; i++)
        {
        if(a[i] > 0)
            maxi = maxi + a[i];
        if(a[i] > maxele)
            maxele = a[i];
    }
    if(maxi == 0)
        return maxele;
    else
        return maxi;
}

int main() {
    int test;
    cin >> test;
    while(test--)
        {
        int N;
        cin >> N;
        int A[N];
        for(int i = 0; i < N; i++)
            {
            int input;
            cin >> input;
            A[i] = input;
        }
       cout << MaxSubArray(A, N) << " " << Max(A, N);
        cout << endl;
    }
    return 0;
}

