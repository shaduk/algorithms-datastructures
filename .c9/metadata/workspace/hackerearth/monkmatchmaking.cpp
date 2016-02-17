{"filter":false,"title":"monkmatchmaking.cpp","tooltip":"/hackerearth/monkmatchmaking.cpp","undoManager":{"mark":13,"position":13,"stack":[[{"start":{"row":0,"column":0},"end":{"row":32,"column":0},"action":"insert","lines":["#include <iostream>","#include <string>","#include <vector>","using namespace std;","","int hf(string const& s) {","    unsigned long hash = 5381;","     char c;","    for(int i=0; i<s.size(); i++){","        c=s[i];","        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */","    }","    return hash;","\t}","","int main()","{","    string S;","    cin >> S;","    int N;","    cin >> N;","    ","    for(int i = 0; i < N; i++)","    {","    \tint a,b,c,d, check = 0;","    \tcin >> a >> b >> c >> d;","    \tif(hf(S.substr(a-1,b-a+1)) == hf(S.substr(c-1,d-c+1)))","    \tcout << \"Yes\" << endl;","    \telse","    \tcout << \"No\" << endl;","    }","}",""],"id":2}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":4}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":5}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["*"],"id":6}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":[" "],"id":7}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":81},"action":"insert","lines":["https://www.hackerearth.com/code-monk-hashing/algorithm/monk-and-match-making/"],"id":8}],[{"start":{"row":0,"column":81},"end":{"row":0,"column":82},"action":"insert","lines":[" "],"id":9}],[{"start":{"row":0,"column":82},"end":{"row":0,"column":83},"action":"insert","lines":["8"],"id":10}],[{"start":{"row":0,"column":83},"end":{"row":0,"column":84},"action":"insert","lines":["/"],"id":11}],[{"start":{"row":0,"column":83},"end":{"row":0,"column":84},"action":"remove","lines":["/"],"id":12}],[{"start":{"row":0,"column":82},"end":{"row":0,"column":83},"action":"remove","lines":["8"],"id":13}],[{"start":{"row":0,"column":82},"end":{"row":0,"column":83},"action":"insert","lines":["*"],"id":14}],[{"start":{"row":0,"column":83},"end":{"row":0,"column":84},"action":"insert","lines":["/"],"id":15}],[{"start":{"row":0,"column":0},"end":{"row":2,"column":0},"action":"remove","lines":["/*","",""],"id":17,"ignore":true}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":84},"action":"remove","lines":[" https://www.hackerearth.com/code-monk-hashing/algorithm/monk-and-match-making/ */"],"id":16}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":4,"column":17},"end":{"row":4,"column":17},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1455710984476,"hash":"2da9c28b3b38aa0b7b525dad612c433685f1a5a8"}