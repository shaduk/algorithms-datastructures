{"filter":false,"title":"hashmap.cpp","tooltip":"/hackerearth/hashmap.cpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":40,"column":0},"action":"insert","lines":["#include <iostream>","#include <map>","using namespace std;","","int main()","{","    int test;","    cin >> test;","    while(test--)","    {","    \tint sum = 0, sub, count = 0;","    \tcin >> sub;","    \tmap<int, int> mymap;","    \tfor(int i = 0; i < sub; i++)","    \t{","    \t\tint a, b;","    \t\tcin >> a >> b;","    \t\t","    \t\tif(b == 1)","    \t\t{","    \t\t\t","    \t\t\tif(!mymap[a])","    \t\t\t{","    \t\t\t\t","    \t\t\t\tcount++;","    \t\t\t\tmymap[a] = 1;","    \t\t\t}","    \t\t}","    \t\telse","    \t\t{","    \t\t\tcount = 0;","    \t\t}","    \t\t","    \t\tif(count > sum)","    \t\t\tsum = count;","    \t\t","    \t}","    \tcout << sum << endl;","    }","}",""],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":40,"column":0},"end":{"row":40,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1458761684348,"hash":"f54b8805d51e5debcc894ed5b558b582200335b3"}