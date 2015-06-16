#include<iostream>
#include<vector>
using namespace std;

vector<int> generateprime(int num1,int num2)
{   
    vector<int> arr;
    for(int i=num1; i<=num2 ;i++)
    {   
        bool isPrime = true;
        for(int j=2; j*j<= i ; j++)
        {
            if(i%j==0)
            {   
                isPrime = false;
                break;
            }
            
        }
        if(isPrime && i!=1)
        {
            arr.push_back(i);
        }
      
    }
    return arr;
}

int main()
{
int i,cases,n1,n2;
   cin >> cases;
    for(i=0;i<cases;i++)
        {	
            cin >> n1 >> n2;
            vector<int> v= generateprime(n1,n2);
            for (int i=0; i<v.size();i++)
            {
                cout << v[i] << endl;
            }
            cout << "\n";
        }
    return 0;
}
