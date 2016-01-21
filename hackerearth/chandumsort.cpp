/* https://www.hackerearth.com/code-monk-sorting/algorithm/chandu-and-his-girlfriend/ */

#include <iostream>
using namespace std;

void Merge(int Arr[], int start, int end, int mid)
{
   
    
    int i = start, j = mid + 1; 
    int k = 0;
    int lengthaux = end - start + 1;
    int Aux[lengthaux];
    
    while(i <= mid && j <= end)
    {
        if(Arr[i] >= Arr[j])
        {
            Aux[k] = Arr[j];
            k++;
            
            j++;
        }
        else if(Arr[j] >= Arr[i])
        {
            Aux[k] = Arr[i];
            k++;
            
            i++;
        }
            
    }
    while(i <= mid)
    {
        Aux[k] = Arr[i];
        k++;
        i++;
    }
    while(j <= end)
    {
        Aux[k] = Arr[j];
        k++;
        j++;
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
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
    	int totalnos;
    	
    	cin >> totalnos;
    	int Arry[totalnos];
    	
    	for(int i = 0; i < totalnos; i ++)
    	{
    		int no;
    		cin >> no;
    		Arry[i] = no;
    	}
        MergeSort(Arry, 0, totalnos-1);
        for(int i = totalnos-1; i >= 0; i--)
        {
            cout << Arry[i] << " ";
        }
        cout << endl;
        
    }
    
}