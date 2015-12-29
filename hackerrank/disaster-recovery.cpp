/* 

https://www.hackerrank.com/companies/vmware/challenges/disaster-recovery

*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <typeinfo>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int noservers,no;
    vector<int> v;
    cin >> noservers;
    static long long memo[1000000];
    memo[0] = 0;
    for(int i = 0; i < noservers; i++)
        {
        cin >> no;
        v.push_back(no);
    }
    
    for(int i = 1; i <= noservers; i++)
        {
        if(v.size() == 1)
            {
            memo[i] = memo[i-1] +i*v.at(0);
        }
        else if(i*v.front() + memo[i-1] > i*v.back() + memo[i-1])
            {
            
            memo[i] = memo[i-1] + i*v.front();
            v.erase(v.begin());
            
        }
        else if(i*v.front() + memo[i-1] <= i*v.back() + memo[i-1]){
            memo[i] = memo[i-1] + i*v.back();
            v.pop_back();
        }
      
        
    }
    cout << memo[noservers];
    return 0;
}