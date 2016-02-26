#include <iostream>
using namespace std;

int largest;

void max_heapify (int Arr[ ], int i, int N)
{
    int left = 2*i;                   //left child
    int right = 2*i +1;           //right child
    if(left<= N && Arr[left] > Arr[i])
          largest = left;
    else
         largest = i;
    if(right <= N && Arr[right] > Arr[largest])
        largest = right;
    if(largest != i )
    {
        swap(Arr[i] , Arr[largest]);
        max_heapify(Arr, largest,N);
    } 
}


int main()
{
    int N;
    cin >> N;
    int Arr[N+1];
    for(int i = 1; i <= N; i++)
    {
    	int input;
    	cin >> input;
    	Arr[i] = input;
    	max_heapify(Arr, 1, i);
    	for(int j = 1; j <= i; j++)
    	{
    		cout << Arr[j] << " ";
    	}
    	cout << endl;
    	if(i < 3)
    	cout << "-1" << endl;
    	else
    	cout << Arr[i]*Arr[i-1]*Arr[i-2] << endl;
    }
}
