#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

class CompareDist
{
public:
    bool operator()(pair<long long int,int> n1,pair<long long int,long long int> n2) {
    	if(n1.second == n2.second)
    		return n1.first>n2.first;
        return n1.second>n2.second;
        
    }
};

int main()
{
	long long int C, P, N;
	priority_queue<pair<long long int,long long int>,vector<pair<long long int,long long int>>,CompareDist> pq;
	vector<stack<long long int>> myvector(100010);
	cin >> C >> P >> N;
	for(long long int i = 1; i <= C; i++)
	{
		if(i <= N)
		{
			long long int input;
			cin >> input;
			myvector[i].push(input);
			pq.push(make_pair(i,input));
		}
		else
		{	myvector[i].push(0);
			pq.push(make_pair(i,0));
		}
	}
	for(long long int i = 1; i <= P; i++)
	{
		long long int input, last, size;
		cin >> input;
		long long int j = pq.top().first;
		pq.pop();
		cout << j << " ";
		last = myvector[j].top();
		myvector[j].push(input);
		size = myvector[j].size();
		if(last != 0)
		pq.push(make_pair(j,size*(last+input)));
		else
		pq.push(make_pair(j,(size-1)*(last+input)));
	}
}
