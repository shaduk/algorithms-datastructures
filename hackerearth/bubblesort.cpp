#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int testcases;
    cin >> testcases;
    while(testcases--)
    {
    	int totalnos;
    	vector<int> novector; 
    	cin >> totalnos;
    	for(int i = 0; i < totalnos; i ++)
    	{
    		int no;
    		cin >> no;
    		novector.push_back(no);
    	}
    	
    	for(int i = 0; i < totalnos-1; i++)
    	{
    		for(int k = 0; k < totalnos-i-1; k++)
    		{
    			if(novector[k] < novector[k+1])
    			{
    				int temp = novector[k];
    				novector[k] = novector[k+1];
    				novector[k+1] = temp;
    			}
    		}
    	}
    	
    	for(int i = 0; i < totalnos; i++)
    	{
    		cout << novector[i] << " ";
    	}
    	cout << "\n";
    }
    return 0;
}
