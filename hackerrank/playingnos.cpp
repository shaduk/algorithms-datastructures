#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    vector<int> Num;
    for(int i = 0; i < N; i++)
    {
        int input;
        cin >> input;
        Num.push_back(input);
    }
    int Q;
    cin >> Q;
    for(int i = 0; i < Q; i++)
        {
        int no, sum = 0; 
        cin >> no;
        for(int j = 0; j < N; j++)
            {
            sum = sum + abs(no+Num[j]);
            Num[j] = no + Num[j];
        }
        cout << sum << endl;
    }
    return 0;
}