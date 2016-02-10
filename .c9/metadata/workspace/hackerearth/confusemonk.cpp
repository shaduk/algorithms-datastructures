{"filter":false,"title":"confusemonk.cpp","tooltip":"/hackerearth/confusemonk.cpp","undoManager":{"mark":9,"position":9,"stack":[[{"start":{"row":0,"column":0},"end":{"row":30,"column":0},"action":"insert","lines":["#include <iostream>","#include <math.h>","using namespace std;","","long long int GCD(long long int A, long long int B) {","\tif(B==0)","        return A;","    else","        return GCD(B, A % B);","}","","int main()","{","    int test;","    long long monk = pow(10, 9) + 7, g = 0, f = 1, ans = 1;","    cin >> test;","    while(test--)","    {","    \tlong long input;","    \tcin >> input;","    \tg = GCD(g, input);","    \tf = (f*input)%monk;","    }","    for(int i = 0; i < g; i++)","    {","    \t","    \tans= (f * ans)%monk;","    }","    cout << ans;","}",""],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":92},"action":"insert","lines":["https://www.hackerearth.com/code-monk-number-theory-i/algorithm/the-confused-monk/editorial/"],"id":4}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":5}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["*"],"id":6}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":[" "],"id":7}],[{"start":{"row":0,"column":95},"end":{"row":0,"column":96},"action":"insert","lines":[" "],"id":8}],[{"start":{"row":0,"column":96},"end":{"row":0,"column":97},"action":"insert","lines":["*"],"id":9}],[{"start":{"row":0,"column":97},"end":{"row":0,"column":98},"action":"insert","lines":["/"],"id":10}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":0,"column":98},"end":{"row":0,"column":98},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1454948770429,"hash":"90f095df4c4629dade31211572ffc1fe6c89c5c0"}