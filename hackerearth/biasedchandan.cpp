#include <iostream>
#include <stack>
using namespace std;

int main()
{
   int n, sum = 0;
   stack<int> mystack;
   cin >> n;
   
   for(int i = 0; i < n; i++)
   {
   		int k;
   		cin >> k;
   		if(k != 0)
   		mystack.push(k);
   		else
   		mystack.pop();
   }
   while(!mystack.empty())
   {
   		sum = sum + mystack.top();
   		mystack.pop();
   }
   cout << sum << endl;
   
}
