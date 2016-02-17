/* https://www.hackerearth.com/code-monk-hashing/algorithm/monk-and-match-making/ */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int hf(string const& s) {
    unsigned long hash = 5381;
     char c;
    for(int i=0; i<s.size(); i++){
        c=s[i];
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return hash;
	}

int main()
{
    string S;
    cin >> S;
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
    	int a,b,c,d, check = 0;
    	cin >> a >> b >> c >> d;
    	if(hf(S.substr(a-1,b-a+1)) == hf(S.substr(c-1,d-c+1)))
    	cout << "Yes" << endl;
    	else
    	cout << "No" << endl;
    }
}
