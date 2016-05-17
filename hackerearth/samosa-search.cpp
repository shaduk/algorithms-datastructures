#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, K, maxi = 0, sum = 0;
    cin >> N >> K;
    vector<int> myvector;
    for(int i = 0; i < N; i++)
    {
    	int input;
    	cin >> input;
    	myvector.push_back(input);
    }
    std::sort(myvector.begin(), myvector.end()); 
    for(int i = 0; i < N; i++)
    {
    	sum = sum + myvector[i];
    	if(sum > K)
    	break;
    	maxi++;
    }
    cout << maxi;
}
