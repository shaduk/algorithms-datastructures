#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int numbers[cases];
    std::vector<int> left;
    std::vector<int> right;
    
    if(cases%2!=0)
    {
        cout << "The no of entries is odd";
        return 0;
    }
    for(int i=0;i<cases;i++)
    {
        cin >> numbers[i];
        
    }
    std::sort(numbers,numbers + cases);
    
    
    for(int i=cases-1;i>=0;i=i-2)
    {
        
        int sum_left=0;
        for(std::vector<int>::iterator j=left.begin();j!=left.end();++j)
            sum_left += *j;
        int sum_right=0;
        for(std::vector<int>::iterator j=right.begin();j!=right.end();++j)
            sum_right += *j;
        if(sum_left>=sum_right)
        {
        left.push_back(numbers[i-1]);
        right.push_back(numbers[i]);
        }
        else
        {
        right.push_back(numbers[i-1]);
        left.push_back(numbers[i]);
        }
       
    }
        int sum_left=0;
        for(std::vector<int>::iterator j=left.begin();j!=left.end();++j)
            sum_left += *j;
        int sum_right=0;
        for(std::vector<int>::iterator j=right.begin();j!=right.end();++j)
            sum_right += *j;
            
    if(sum_left==sum_right)
    {
    cout << "Bucket1 : ";
    for (std::vector<int>::iterator i = left.begin(); i != left.end(); ++i)
    std::cout << *i << ',';
    cout << "\n";
    cout << "Bucket2 : ";
    for (std::vector<int>::iterator i = right.begin(); i != right.end(); ++i)
    std::cout << *i << ',';
    }
    else
    {
   
        cout << "Cant divide";
        return 0;
    }
    
}
