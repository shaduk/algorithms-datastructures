#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    stack <int> mystack;
    priority_queue<int> myq;
    int test;
    cin >> test;
    while(test--)
        {
        int a, b;
        cin >> a;
        if(a==1)
            {
            cin >> b;
            mystack.push(b);
            myq.push(b);
        }
        else if(a == 2)
            {
            stack<int> tempstack;
            int temp = mystack.top();
            mystack.pop();
            
            while(temp != myq.top())
                {
                tempstack.push(myq.top());
                myq.pop();
            }
            myq.pop();
            while(!tempstack.empty())
                {
                myq.push(tempstack.top());
                tempstack.pop();
            }
        }
        else if(a == 3)
            {
            cout << myq.top() << endl;
        }
    }
    return 0;
}
