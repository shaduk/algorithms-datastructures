#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int findNearest(int numbers[],bool used[],int idx,int cases)
{
    int minIndex = -1;
    int min = *std::max_element(numbers,numbers+cases) - *std::min_element(numbers,numbers+cases);
    for(int i =0;i < cases;i++)
    {
        if(i==idx)
        continue;
        if(used[i]==1)
        continue;
        int diff = std::abs(numbers[idx] - numbers[i]);
        if(diff < min)
        {
            min = diff;
            minIndex = i;
        }
    }
    return minIndex;
}

int sum()

int main()
{
    int cases;
    cin >> cases;
    int numbers[cases],par[cases];
    bool used[50] = {0};
    int left=0,right=cases-1;
    
    if(cases%2!=0)
    {
        cout << "The no of entries is odd";
    }
    for(int i=0;i<cases;i++)
    {
        cin >> numbers[i];
        
    }
    std::sort(numbers,numbers + cases);
    
    
    for(int i=0;i<cases;i++)
    {
        if(used[i])
        continue;
        int j = findNearest(numbers,used,i,cases);
        used[i] =1;
        used[j]=1;
        
    }
    
    
}
