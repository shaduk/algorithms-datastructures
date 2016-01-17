/* https://www.hackerrank.com/challenges/gem-stones/submissions/code/16569109 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bitset>
#include <set>
#include <algorithm>
using namespace std;

string comchr(string &a, string &b)
{
    string r;
    set<char> s;    //s to remove duplicate chars
    bitset<256> t;    // All ASCII char
    if (a.length()+b.length()<=1)    return "";
    if (a.compare(b)==0)    return a;
    for (string::size_type i=0; i<a.length(); i++)
        if (!t.test(a[i]))
            t.set(a[i]);
    for (string::size_type i=0; i<b.length(); i++)
        if (t.test(b[i]))
            s.insert(b[i]);
    for (set<char>::iterator it=s.begin(); it!=s.end(); it++)
        r.push_back(char(*it));
    return r;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     int N;
    cin >> N;
    
    vector <string> stored;
    for(int i = 0; i < N; i++)
        {
        string input;
        cin >> input;
        stored.push_back(input);
    }
    string common = comchr(stored[0], stored[1]);
    for(int i = 2; i < N; i++)
        {
        common = comchr(stored[i],common);
    }
    cout << common.length();
    return 0;
}
