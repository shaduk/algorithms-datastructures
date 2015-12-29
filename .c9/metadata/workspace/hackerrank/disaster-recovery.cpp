{"filter":false,"title":"disaster-recovery.cpp","tooltip":"/hackerrank/disaster-recovery.cpp","undoManager":{"mark":16,"position":16,"stack":[[{"start":{"row":0,"column":0},"end":{"row":44,"column":1},"action":"insert","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","#include <typeinfo>","using namespace std;","","","int main() {","    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ ","    int noservers,no;","    vector<int> v;","    cin >> noservers;","    static long long memo[1000000];","    memo[0] = 0;","    for(int i = 0; i < noservers; i++)","        {","        cin >> no;","        v.push_back(no);","    }","    ","    for(int i = 1; i <= noservers; i++)","        {","        if(v.size() == 1)","            {","            memo[i] = memo[i-1] +i*v.at(0);","        }","        else if(i*v.front() + memo[i-1] > i*v.back() + memo[i-1])","            {","            ","            memo[i] = memo[i-1] + i*v.front();","            v.erase(v.begin());","            ","        }","        else if(i*v.front() + memo[i-1] <= i*v.back() + memo[i-1]){","            memo[i] = memo[i-1] + i*v.back();","            v.pop_back();","        }","      ","        ","    }","    cout << memo[noservers];","    return 0;","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":2,"column":0},"end":{"row":3,"column":0},"action":"insert","lines":["",""],"id":4}],[{"start":{"row":3,"column":0},"end":{"row":4,"column":0},"action":"insert","lines":["",""],"id":5}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":72},"action":"insert","lines":["https://www.hackerrank.com/companies/vmware/challenges/disaster-recovery"],"id":6}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":7}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["*"],"id":8}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":[" "],"id":9}],[{"start":{"row":0,"column":75},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":10}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":11}],[{"start":{"row":2,"column":0},"end":{"row":2,"column":1},"action":"insert","lines":["*"],"id":12}],[{"start":{"row":2,"column":1},"end":{"row":2,"column":2},"action":"insert","lines":["/"],"id":13}],[{"start":{"row":0,"column":3},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":14}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":15}],[{"start":{"row":2,"column":0},"end":{"row":3,"column":0},"action":"insert","lines":["",""],"id":16}],[{"start":{"row":2,"column":0},"end":{"row":3,"column":0},"action":"remove","lines":["",""],"id":17}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":2,"column":0},"end":{"row":2,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1451397759198,"hash":"cd3e8a4690858f164bb22bc1d8d7aca472169d14"}