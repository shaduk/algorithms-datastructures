#include <iostream>
using namespace std;
#define min(x,y,z) (x < y ? (x < z ? x : z) : (y < z ? y : z))

int main() {
    int test;
    cin >> test;
    while(test--) {
        string s1, s2;
        int mem[1000][1000];
        cin >> s1 >> s2;
        int l1 = s1.length();
        int l2 = s2.length();
        for (int i = 0; i <= l1; i++) {
            for(int j = 0; j <= l2; j++) {
                if (i == 0) {
                    mem[i][j] = j;
                }
                else if (j == 0) {
                    mem[i][j] = i;
                }
                else if(s1[i-1] == s2[j-1]) {
                    mem[i][j] = mem[i-1][j-1];
                }
                else {
                    mem[i][j] = min(mem[i-1][j-1], mem[i-1][j], mem[i][j-1])+1;
                }
            }
        }
        cout << mem[l1][l2] << endl;
    }
}