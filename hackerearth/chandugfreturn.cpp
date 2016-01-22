/* https://www.hackerearth.com/code-monk-sorting/algorithm/chandu-and-his-girlfriend-returns/ */

#include <iostream>
using namespace std;


void Merge(int Arr1[], int Arr2[], int size1, int size2)
{
	int i = 0, j = 0, k = 0;
	
	int Aux[size1 + size2];
	
	while(i < size1 && j < size2)
	{
		if(Arr1[i] > Arr2[j])
		{
			Aux[k++] = Arr1[i++];
			
		}
		else
		{
			Aux[k++] = Arr2[j++];
		}
	}
	while(i < size1)
	{
		Aux[k++] = Arr1[i++];
	}
	while(j < size2)
	{
		Aux[k++] = Arr2[j++];
	}
	for(int i = 0; i < size1+size2; i++)
	{
		cout << Aux[i] << " " ;
	}
	cout << endl;
}

int main()
{
    int test= 0;
    cin >> test;
    while(test--)
    {
    	int n,m;
    	cin >> n >>m;
    	int Arr1[n], Arr2[m];
    	for(int i = 0; i < n; i++)
    	{
    		cin >> Arr1[i];
    	}
    	for(int j = 0; j < m; j++)
    	{
    		cin >> Arr2[j];
    	}
    	Merge(Arr1, Arr2, n, m);
    	
    }
    return 0;
}