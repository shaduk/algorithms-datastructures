#include <iostream>
#include <set>
using namespace std;

set<int> myset;
void initialize(int Camp[], int Size[], int N)
{
	for(int i = 1; i <= N; i++)
	{
		Camp[i] = i;
	}
	
	for(int i = 1; i <= N; i++)
	{
		Size[i] = 1;
	}
	myset.insert(1);
}

int root(int Camp[], int i)
{
	while(Camp[i] != i)
	{
		i = Camp[i];
	}
	return i;
}

void weightedunion(int Camp[], int Size[], int a, int b)
{
	int roota = root(Camp, a);
	int rootb = root(Camp, b);
	if(Size[roota] < Size[rootb])
	{
		Camp[roota] = Camp[rootb];
		Size[rootb] += Size[roota];
		
	}
	else
	{
		Camp[rootb] = Camp[roota];
		Size[roota] += Size[rootb]; 
	}
	
}

bool find(int Camp[], int a, int b)
{
	return root(Camp, a) == root(Camp, b);
}

int main()
{
    long long int N, Q;
    cin >> N >> Q;
  
    int Camp[N+1], Size[N+1];
    initialize(Camp, Size, N);
    for(long long int i = 0; i < Q; i++)
    {
    	int a, b;
    	cin >> a >> b;
    	if(find(Camp, a, b))
    	{
    		if(myset.size() == N)
    		{
    			cout << "0";
    		}
    		else
    		cout << *myset.rbegin() - *myset.begin();
    	}

    	else
    	{
    		weightedunion(Camp, Size, a, b);
    		myset.insert(Size[root(Camp, Camp[a])]);
    		myset.insert(Size[root(Camp, Camp[b])]);
    		if(myset.size() == N)
    		{
    			cout << "0";
    		}
    		else
			cout << *(myset.rbegin()) - *(myset.begin());
    	}
        cout << endl;
    }
    
}
