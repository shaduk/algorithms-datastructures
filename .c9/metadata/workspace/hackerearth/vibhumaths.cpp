{"filter":false,"title":"vibhumaths.cpp","tooltip":"/hackerearth/vibhumaths.cpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":23,"column":0},"action":"insert","lines":["#include <iostream>","using namespace std;","","int fact(int n)","{","\tif(n == 1)","\treturn 1;","\telse","\treturn n*fact(n-1);","}","","int main()","{","    int test;","    cin >> test;","    while(test--)","    {","    \tint n;","    \tcin >> n;","    \tint ans = (fact(n)/2 + 1);","    \tcout << ans << endl;","    }","}",""],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":23,"column":0},"end":{"row":23,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1456860161557,"hash":"0a1124efcb8bf5e52969a40635340b736e5c634a"}