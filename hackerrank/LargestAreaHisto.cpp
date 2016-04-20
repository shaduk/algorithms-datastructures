#include <cmath>
#include <cstdio>
#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int N, maxArea = 0, currArea = 0, top = 0, j = 0;
    stack <int> mystack;
    cin >> N;
    int Arr[N], i = 0;
    for(int j = 0; j < N; j++)
        {
        int input;
        cin >> input;
        Arr[j] = input;
    }
    while(i < N)
        {
        if(mystack.empty() || Arr[mystack.top()] <= Arr[i])
            mystack.push(i++);
        else
            {
            top = mystack.top();
            mystack.pop();
            currArea = Arr[top]*(mystack.empty() ? i : i-mystack.top()-1);
            if(maxArea < currArea)
                maxArea = currArea;
        }
    }
    while(!mystack.empty())
            {
            top = mystack.top();
            mystack.pop();
           currArea = Arr[top]*(mystack.empty() ? i : i-mystack.top()-1);
            if(maxArea < currArea)
                maxArea = currArea;
        }
    cout << maxArea;
    return 0;
}
