#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N != 0)
    {
        stack<int> mystack1, mystack2;
        for(int i = 0; i < N; i++)
        {
            int input;
            cin >> input;
            if(mystack1.empty() && input == 1)
                mystack1.push(input);
            else if(!mystack1.empty() && (input-mystack1.top() == 1))
                mystack1.push(input);
            else
                mystack2.push(input);
            while(!mystack2.empty() && !mystack1.empty() && mystack2.top()-mystack1.top()==1)
            {
                mystack1.push(mystack2.top());
                mystack2.pop();
            }
        }
        
        while(!mystack2.empty() && mystack2.top()-mystack1.top() == 1)
        {
            mystack1.push(mystack2.top());
            mystack2.pop();
        }
        
        if(mystack2.empty())
            cout << "yes";
        else
            cout << "no";
        cout << endl;
        cin >> N;
    }
}