/* https://www.hackerearth.com/code-monk-disjoint-set-union/algorithm/city-and-fireman-vincent/ */

#include <iostream>
#include <set>
using namespace std;

int N, K;

void initialize(long long int City[], long long int E[],int N)
{
	for(int i = 1; i <= N; i++)
    {
    	int x;
    	cin >> x;
    	E[i] = x;
    }
    
	for(int i=1; i <= N; i++)
	{
		City[i] = i;
	}
	
}

int root(long long int Arr[], long long int i)
{
	while(Arr[i] != i)
	{
		i = Arr[i];
	}
	return i;
}

void unions(long long int Arr[],long long int E[],long int a,long int b)
{
	int roota = root(Arr, a);
	int rootb = root(Arr, b);
	if(E[roota] >= E[rootb])
	Arr[roota] = rootb;
	else
	Arr[rootb] = roota;
}

int main()
{
	cin >> N;
	long long int E[N+1], City[N+1], c = 0, sum = 1;
	initialize(City, E, N);
	set<long long int> myset;
    cin >> K;
    for(int i = 0; i < K; i++)
    {
    	int a, b;
    	cin >> a >> b;
    	unions(City, E, a, b);
    }
  	
	for(int i = 1; i <= N; i++)
	{
		myset.insert(root(City, City[i]));
	}
	
	for (std::set<long long int>::iterator it=myset.begin(); it!=myset.end(); ++it)
	{
		for(int i = 1; i <= N; i++)
		{
			if(root(City, City[i]) == *it && E[i] == E[*it])
		    {
		        c++;
		    }
		}
		sum = sum * c;
		sum = sum%1000000007;
	    c = 0;
	}
	
	cout << sum;
}
