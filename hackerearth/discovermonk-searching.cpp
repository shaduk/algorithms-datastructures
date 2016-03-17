/* https://www.hackerearth.com/code-monk-searching/algorithm/discover-the-monk/*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool BinarySearch(vector<int> Arr, int left, int right, int item)
{
	if(left <= right)
	{
		int mid = left + (right - left)/2;	
		if(Arr[mid] == item)
			return true;
		else if(item < Arr[mid])
			return BinarySearch(Arr, left, mid-1, item);
		else
			return BinarySearch(Arr, mid+1, right, item);
	}
	else
		return false;
}

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> myvec;
    for(int i = 0; i < N; i++)
    {
    	int input;
    	cin >> input;
    	myvec.push_back(input);
    }
    
    std::sort(myvec.begin(), myvec.end());
    
    for(int i = 0; i < Q; i++)
    {
    	int input;
    	cin >> input;
    	if(BinarySearch(myvec, 0, N, input))
    	cout << "YES" << endl;
    	else
    	cout << "NO" << endl;
    }
    return 0;
}
