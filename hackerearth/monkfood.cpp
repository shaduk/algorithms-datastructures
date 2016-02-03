#include <iostream>
using namespace std;
#include <stack>

int main()
{
    int N = 0;
    cin >> N;
    stack<int> stock;
    while(N--)
    {
        int n1 , n2;
        cin >> n1;
        if(n1 == 1)
        {
            if(stock.empty())
            {
                cout << "No Food" << endl;
            }
            else
            {
                cout << stock.top()<<endl;
                stock.pop();
            }
            
        }
        else
        {
        	cin >> n2;
            stock.push(n2);
        }
    }
    return 0;
}