{"filter":false,"title":"TruckTour.cpp","tooltip":"/hackerrank/TruckTour.cpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":26,"column":0},"action":"insert","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","","int main() {","    int N, sumi = 0, j = 0;","    cin >> N;","    for(int i = 0; i < N; i++)","        {","        int a, b;","        cin >> a >> b;","        sumi = sumi + (a-b);","        if(sumi < 0)","            {","            sumi = 0;","            j = i + 1;","        }","    }","    cout << j <<endl;","    return 0;","}","",""],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":26,"column":0},"end":{"row":26,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1461097922000,"hash":"e04e43a50c2ac10c62d009451c99798b81b1e53f"}