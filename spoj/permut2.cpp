#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N != 0)
    {
        bool flag = true;
        int no[N];
        int inv[N];
        
        for(int i = 1; i <= N; i++)
        {
            int n;
            cin >> n;
            no[i] = n;
        }
        
        for(int i = 1; i <= N; i++)
        {
            inv[no[i]] = i; 
        }
        for(int i = 1; i <= N; i++)
        {
            if(no[i] != inv[i])
            flag = false;
        }
        if(flag)
        cout << "ambiguous" << endl;
        else
        cout << "not ambiguous" << endl;
        cin >> N;
    }
}