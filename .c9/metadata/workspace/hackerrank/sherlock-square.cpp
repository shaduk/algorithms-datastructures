{"filter":false,"title":"sherlock-square.cpp","tooltip":"/hackerrank/sherlock-square.cpp","undoManager":{"mark":9,"position":9,"stack":[[{"start":{"row":0,"column":0},"end":{"row":33,"column":1},"action":"insert","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","","int main() {","    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   ","    int test;","    cin >> test;","    while(test--)","        {","        int start,end,answer=0,i;","        cin >> start;","        cin >> end;","        i = start;","        while(i <= end)","        {","            double square = sqrt(i);","            if(floor(square) == square)","                { ","                answer = answer + 1;","                i = pow((square+1),2);","                }","            else{","            i = i + 1;","            }","        }","        cout << answer <<endl;","    }","    return 0;","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":4}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["*"],"id":5}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":[" "],"id":6}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":61},"action":"insert","lines":["https://www.hackerrank.com/challenges/sherlock-and-squares"],"id":7}],[{"start":{"row":0,"column":61},"end":{"row":0,"column":62},"action":"insert","lines":[" "],"id":8}],[{"start":{"row":0,"column":62},"end":{"row":0,"column":63},"action":"insert","lines":["*"],"id":9}],[{"start":{"row":0,"column":63},"end":{"row":0,"column":64},"action":"insert","lines":["/"],"id":10}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":0,"column":64},"end":{"row":0,"column":64},"isBackwards":true},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1452277115090,"hash":"c37f693884c399193e4d7c25bae7731c557ba91d"}