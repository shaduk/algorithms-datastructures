#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int test;
    cin >> test;
	while(test--)
	{
		int a, b, c, k, mid = 0;
		cin >> a >> b >> c >> k;
		int left = 0;
		int right = 1000000000;
		while(left <= right)
		{
			mid = left + (right - left) / 2;
			
			if(c > k)
			{
				cout << left << endl;
				break;
			}
			if(a*pow(mid,2) + b*mid + c >= k && a*pow(mid-1,2) + b*(mid-1) + c < k)
			{
				cout << mid << endl;
				break;
			}
			
	
			else if(a*pow(mid,2) + b*mid + c < k)
			{
			
				left = mid + 1;
			}
			
			else if(a*pow(mid,2) + b*mid + c > k)
			{
			
				right = mid - 1;
			}
		}
	}
	return 0;
}