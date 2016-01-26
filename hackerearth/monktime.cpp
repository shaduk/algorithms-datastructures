#include <iostream>
using namespace std;
#include <queue>

int main()
{
    int N, ans=0;
    cin >> N;
    queue <int> q1;
    queue <int> q2;
    for(int i = 0; i < N; i++)
    {
    	int entry;
    	cin >> entry;
    	q1.push(entry);
    }
    
    for(int i = 0; i < N; i++)
    {
    	int entry;
    	cin >> entry;
    	q2.push(entry);
    }
    
    while(q1.front() != q2.front() && q1.back() != q2.back())
    {
    	
    	int pop = q1.front();
    	q1.pop();
    	q1.push(pop);
    	ans++;
    }
    
    cout << ans + N;
    return 0;
    
}