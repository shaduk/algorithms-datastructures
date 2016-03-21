#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
   int test;
   cin >> test;
   while(test--)
   {
   		string str1, str2, ans;
   		queue<char> q1, q2;
   		cin >> str1 >> str2;
   		for ( std::string::iterator it=str1.begin(); it!=str1.end(); ++it)
   		{
   			q1.push(*it);
   		}
   		for ( std::string::iterator it=str2.begin(); it!=str2.end(); ++it)
   		{
   			q2.push(*it);
   		}
   		while(!q1.empty())
   		{
   			if(!q2.empty())
   			{
   				if(q2.front() < q1.front())
   				{
   					ans.push_back(q2.front());
   					q2.pop();
   					q1.pop();
   				}
   				else
   				{
   					q2.pop();
   				}
   			}
   			else
   			{
   				ans.push_back(q1.front());
   				q1.pop();
   			}
   		}
   		cout << ans << endl;
   		
   }
}
