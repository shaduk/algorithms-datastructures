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
        A.resize(N);
        even.resize(N);
        odd.resize(N);
        for(int i = 0; i < N; i++)
        {
            int input;
            cin >> input;
            A[i] = input;
            even[i] = 1;
            odd[i] = 1;
        }
        for(int i = 0 ; i < N; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(A[i] > A[j])
                    odd[i] = max(odd[i], even[j]+1);
                else if(A[j] > A[i])
                    even[i] = max(even[i], odd[j]+1);
            }   
        }
        for(int i = 0; i < N; i++)
        {
            ans = max(even[i], odd[i]); 
        }
        cout << ans << endl;
    }
}