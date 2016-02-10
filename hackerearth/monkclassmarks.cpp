/*  https://www.hackerearth.com/code-monk-c-stl/algorithm/the-monk-and-class-marks/ */
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
   	std::vector<std::pair<string,int>> grades;
    
    cin >> N;
    
    while(N--)
    {
    	string name;
    	int num;
    	std::pair<string,int> student;
    	cin >> name;
    	cin >> num;
    	student.first = name;
    	student.second = num;
    	grades.push_back(student);
    }
    
    auto cmp = [](std::pair<string,int> const & a, std::pair<string,int> const & b) 
	{ 
    	 return a.second != b.second?  a.second < b.second : a.first > b.first;
	};
	
	std::sort(grades.begin(), grades.end(), cmp);
	
	for(int i = grades.size()-1; i >= 0; i--)
	{
		cout << grades[i].first << " " << grades[i].second << endl;
	}
	return 0;
}