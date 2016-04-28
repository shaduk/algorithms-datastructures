#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    string A[N];
    for(int i = 0; i < N; i++)
        {
        string input;
        cin >> input;
        A[i] = input;
    }
    
    int Q;
    cin >> Q;
    for(int i = 0; i < Q; i++)
        {
        string input;
        cin >> input;
        int count = 0;
        for(int j = 0; j < N; j++)
            {
            if(input == A[j])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
