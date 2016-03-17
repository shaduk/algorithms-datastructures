#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
	int C, P, N;
	vector<std::pair<int,int>> items;
	cin >> C >> P >> N;
	for(int i = 1; i <= C; i++)
	{
		if(i <= P)
		{
			int input;
			cin >> input;
			items.push_back(make_pair(i,input));
		}
		else
		items.push_back(make_pair(i,0));
	}
	
	auto cmp = [](std::pair<int,int> const & a, std::pair<int,int> const & b) 
	{ 
    	 return a.second != b.second?  a.second < b.second : a.first > b.first;
	};
	
	std::sort(items.begin(), items.end(), cmp);
	
    for(int i = 0; i < N; i++)
	{
		cout << items[i].first << " ";
	}
    cout << endl;
}
