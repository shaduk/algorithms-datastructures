#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

int main()
{
    int M;
    scanf("%d",&M);
    map<char, int> mymap;
    for(int i = 0; i < M; i++)
    {
    	char input;
    	scanf("%c",&input);
    	mymap[input] = 1;
    }
    int N, ans = 0;
    scanf("%d",&N);
    for(int i = 0; i < N; i++)
    {
    	int count = 0;
    	char no[1000];
    	
    	while(no != '\n')
    	{
    		scanf("%c", &no);
    		cout << no << " ";
    		if(mymap[no] == 1)
    		count++;
    		if(count >= mymap.size())
    		{
    			ans++;
    		}
    		
    	}
    	cout << endl;
    }
    printf("%d \n", ans);
}
