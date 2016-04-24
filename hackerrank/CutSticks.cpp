#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, mini = 1000;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i] < mini)
            mini = arr[arr_i];
    }
    int count = n;
    while(count)
        {
        count = 0;
        for(int i = 0; i < n; i++)
            {
            if(arr[i] != 0)
                {
                arr[i] = arr[i] - mini;
                count++;
            }
        }
        mini = 1000;
        for(int i = 0; i < n; i++)
            {
            if(arr[i] != 0 && arr[i] < mini)
                {
                mini = arr[i];
            }       
       }
       if(count == 0)
           break;
       cout << count << endl;
    }
    return 0;
}

