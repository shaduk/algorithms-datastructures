#include<iostream>
using namespace std;

int reverseno(int number)
{
    int reverse = 0;
    while(number!=0)
    {
        reverse = reverse*10;
        reverse = reverse+ number%10;
        number = number/10;
    }
    return reverse;
}

int main()
{
int i,cases,n1,n2;
   cin >> cases;
    for(i=0;i<cases;i++)
        {	
            cin >> n1;
        	cin >> n2;
            cout << reverseno(reverseno(n1) + reverseno(n2)) << "\n";
    
        }
    return 0;
}