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
    bool operator()(pair<int,int> n1,pair<int,int> n2) {
        return n1.second<n2.second;
    }
};

int main()
{
	int C, P, N;
	priority_queue<pair<int,int>,vector<pair<int,int>>,CompareDist> pq;
	vector<stack<int>> myvector;
	cin >> C >> P >> N;
	for(int i = 1; i <= C; i++)
	{
		if(i <= P)
		{
			int input;
			cin >> input;
			myvector[i].push(input);
			pq.push(make_pair(i,input));
		}
		else
		{	myvector[i].push(0);
			pq.push(make_pair(i,0));
		}
	}
	for(int i = 1; i <= P; i++)
	{
		int input, last, seclast, z;
		cin >> input;
		int j = pq.top().first;
		pq.pop();
		if(myvector[j].size() < 2)
		{
			myvector[j].push(input);
			pq.push(make_pair(j,));
		}
		else
		{
			last = myvector[j].top();
			myvector[j].pop();
			seclast = myvector[j].top();
			myvector[j].push(last);
			pq.push(make_pair(j,last+seclast));
		}
	}
}
