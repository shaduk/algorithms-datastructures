/* https://www.hackerearth.com/code-monk-disjoint-set-union/algorithm/city-and-flood-1/description/ */

#include <iostream>
#include <set>
using namespace std;

void initialize(int emp[], int N)
{
	for(int i = 1; i <= N; i++)
    {
    	emp[i] = i;
    }
}

int root(int emp[], int a)
{
	while(emp[a] != a)
	{
		a = emp[a];
	}
	return a;
}

void unions(int emp[], int N, int a, int b)
{
	int roota = root(emp, a);
	int rootb = root(emp, b);
	emp[rootb] = roota;
	
}

int main()
{
	int N, K;
	cin >> N;
	int emp[N+1];
	cin >> K;
	initialize(emp, N);
	set<int> myset;
	for(int i = 0; i < K; i++)
	{
		int a, b;
		cin >> a >> b;
		unions(emp, N, a, b);
	}
	
	for(int i = 1; i <= N; i++)
	{
		myset.insert(root(emp, emp[i]));
	}
	cout << myset.size() << endl;
	
}
