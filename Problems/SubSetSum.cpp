#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N, S, A[1001];
        bool opt[1001][1001], flag = false;
        cin >> N >> S;
        for(int i = 0; i < N; i++)
        {
            int no;
            cin >> no;
            A[i] = no;
        }
        
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j <= S; j++)
            {
                opt[A[i]][j] = false;
            }
        }
       
        for(int j = 0; j <= S; j++)
        {
            if(A[0] == j)
                opt[A[0]][j] = true;
        }
  
        for(int i = 1; i < N; i++)
        {
           
            for(int j = 0; j <= S; j++)
            {
                if(A[i] == j)
                    opt[A[i]][j] = true;
                else if( j >= A[i] && opt[A[i-1]][j-A[i]] == true)
                    opt[A[i]][j] = true;
                else
                    opt[A[i]][j] = opt[A[i-1]][j];
            }
            if(opt[A[i]][S] == true)
            {
                flag = true;
                break;
            }
        }
        
        cout << flag << endl;
        
       /* for(int i = 0; i < N; i++)
        {
            for(int j = 0; j <= S; j++)
            {
                cout << opt[A[i]][j] << " ";
            }
            cout << endl;
        } */
    }
}