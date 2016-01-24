/* https://www.hackerearth.com/code-monk-sorting/algorithm/puchi-and-luggage/ */

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define mem(A,val) memset(A,val,sizeof(A))
int C[1000006],D[1000006];

void Merge(int Arr[], int start, int end, int mid)
{
    int i = start, j = mid + 1; 
    int k = 0, count = 0;
    int lengthaux = end - start + 1;
    int Aux[lengthaux];
    
    while(i <= mid && j <= end)
    {
        if(Arr[i] > Arr[j])
        {
        	count++;
            Aux[k++] = Arr[j++];
        }
        
        else
        {
        	C[Arr[i]]+=count;
            Aux[k++] = Arr[i++];
        }
    }
    
    while(i <= mid)
    {
    	C[Arr[i]]+=count;
        Aux[k++] = Arr[i++];
        
    }
    
    while(j <= end)
    {
        Aux[k++] = Arr[j++];
    }
    
    for(int l = 0; l < lengthaux; l++)
    {
        Arr[start] = Aux[l];
        start++;
    }
    
}

void MergeSort(int Arr[], int start, int end)
{
   if(start < end){
    int mid = (start + end) / 2;
    MergeSort(Arr, start, mid);
    MergeSort(Arr, mid+1, end);
    Merge(Arr, start, end, mid);
   }
}

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int noinputs;
		cin >> noinputs;
		int array[noinputs] ;
		for(int i = 0; i < noinputs; i++)
		{
			int inp;
			cin >> inp;
			array[i] = inp;
			D[i] = array[i];
		}
		mem(C,0);
		MergeSort(array, 0, noinputs-1);
		for(int i = 0; i < noinputs; i++)
		{
			cout<<C[D[i]]<<" ";
		}
	    cout<<"\n";
	}
}