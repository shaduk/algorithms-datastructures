#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>          // std::priority_queue
#include <iostream>
#include <algorithm>
using namespace std;

class mycomparison
{
  bool reverse;
public:
  mycomparison(const bool& revparam=false)
    {reverse=revparam;}
  bool operator() (const int& lhs, const int&rhs) const
  {
    if (reverse) return (lhs<rhs);
    else return (lhs>rhs);
  }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    typedef std::priority_queue<int,std::vector<int>,mycomparison> mypq_type;
    mypq_type mypq;
    int N, K, ans = 0;
    cin >> N >> K;
    for(int i = 0; i < N; i++)
        {
        int input;
        cin >> input;
        mypq.push(input);
    }
    
    while(!mypq.empty() && mypq.top() < K) 
        {
        int sweetness,a,b;
        a = mypq.top();
        mypq.pop();
        if(!mypq.empty())
            {
        b = mypq.top();
        mypq.pop();
        sweetness = 1*a + 2*b;
        mypq.push(sweetness);
        ans++;
        }
        else
            ans = -1;
    }
   
    cout << ans;
    
    return 0;
}
