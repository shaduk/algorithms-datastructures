#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   int test;
   cin >> test;
   while(test--)
   {
   		string str1, str2, ans= "";
   		cin >> str1 >> str2;
   		sort(str2.begin(), str2.end());
   		for(int i = 0; i < str1.size(); i++)
   		{
   			if(str2.size() >= 1 && str2[0] < str1[i])
   			{
   				ans = ans + str2[0];
   				str2 = str2.substr(1);
   			}
   			else
   			{
   				ans = ans + str1[i];
   			}
   		}
   		cout << ans << endl;
   }
}
