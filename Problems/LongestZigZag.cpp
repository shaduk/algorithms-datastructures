#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N, ans = 0;
        vector<int> A;
        vector<int> even;
        vector<int> odd;
        cin >> N;
        A.resize(N+1);
        even.resize(N+1);
        odd.resize(N+1);
        for(int i = 1; i <= N; i++)
        {
            int input;
            cin >> input;
            A[i] = input;
        }

        for(int i = 1; i <= N; i++)
        {
            even[i] = 0;
            odd[i] = 1;
            for(int j = 1; j < i; j++)
            {
                if(A[i] > A[j])
                {
                    even[i] = max(even[i], odd[j]+1);
                }
                if(A[j] > A[i])
                {
                    odd[i] = max(odd[i], even[j]+1);
                }
            }   
        }
        
        for(int i = 1; i <= N; i++)
        {
            cout << even[i] << " " << odd[i] << endl;
        }
        
        cout << ans << endl;
    }
}