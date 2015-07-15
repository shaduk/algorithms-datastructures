#include<iostream>
using namespace std;

int multiply(int n,int res[],int res_size)
{
    int carry = 0;
    for(int i=0; i<res_size; i++)
    {   
        int prod = res[i]*n + carry;
        res[i] = prod%10;
        carry = prod/10;
    }
    
    while(carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

void factorial(int n)
{
   int res[500];
   res[0] = 1;
   int res_size = 1;
   for(int i=2; i<=n ;i++)
   {
       res_size = multiply(i,res,res_size);
       
   }
   
   for(int j=res_size-1;j>=0;j--)
   {
       cout << res[j];
   }
   
   cout << "\n";
   
}


int main()
{
    int i,cases,n1;
    cin >> cases;
    for(i=0;i<cases;i++)
        {	
            cin >> n1;
            factorial(n1);
            
        }
    return 0;
}

