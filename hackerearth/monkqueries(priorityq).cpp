#include <iostream>
#include <queue>
#include <vector>
#include <stdio.h>
#include <map>
using namespace std;

int main()
{
   	int test;
   	cin >> test;
   	std::priority_queue<int> maxq;
   	std::priority_queue<int, std::vector<int>, std::greater<int> > minq;
   	map<int, int> mymap;
   	while(test--)
   	{
   		int qname, num;
   		scanf("%d", &qname);
   		if(qname == 1)
   		{
   			scanf("%d", &num);
   			if(mymap[num])
   			mymap[num]++;
   			else
   			mymap[num] = 1;
   			maxq.push(num);
   			minq.push(num);
   		}
   		else if(qname == 2)
   		{
   			scanf("%d", &num);
   			if(mymap[num] and mymap[num] != 0)
   			mymap[num]--;
   			else
   			printf("-1 \n");
   		}
   		else if(qname == 3)
   		{
   			while(maxq.size() && mymap[maxq.top()] == 0)
   			maxq.pop();
   			if(maxq.size())
   			printf("%d\n",maxq.top());
   			else
   			printf("-1\n");
   		}
   		else if(qname == 4)
   		{
   			while(minq.size() && mymap[minq.top()] == 0)
   			minq.pop();
   			if(minq.size())
   			printf("%d\n",minq.top());
   			else
   			printf("-1\n");
   		}
   	}
}
