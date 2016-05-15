/* https://www.hackerrank.com/challenges/acm-icpc-team */


#include <cmath>
#include <bitset>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    int topics = 0, team = 0;
    cin >> n >> m;
    vector<string> topic(n);
    vector<std::bitset<512>> ans;
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    
    for(int topic_i = 0;topic_i < n;topic_i++){
       std::bitset<512> a (std::string(topic[topic_i]));
       for(int j = topic_i+1; j < n; j++)
           {
           std::bitset<512> b (std::string(topic[j]));
           std::bitset<512> c = a|b;
           ans.push_back(c);
           if(c.count() > topics)
               topics = c.count();
       }
    }
    for(int i = 0; i < ans.size(); i++)
        {
        if(ans[i].count() == topics)
            team++;
    }
    cout << topics << endl;
    cout << team << endl;
    
    return 0;
}
