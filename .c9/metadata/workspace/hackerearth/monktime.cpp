{"filter":false,"title":"monktime.cpp","tooltip":"/hackerearth/monktime.cpp","undoManager":{"mark":7,"position":7,"stack":[[{"start":{"row":0,"column":0},"end":{"row":36,"column":1},"action":"insert","lines":["#include <iostream>","using namespace std;","#include <queue>","","int main()","{","    int N, ans=0;","    cin >> N;","    queue <int> q1;","    queue <int> q2;","    for(int i = 0; i < N; i++)","    {","    \tint entry;","    \tcin >> entry;","    \tq1.push(entry);","    }","    ","    for(int i = 0; i < N; i++)","    {","    \tint entry;","    \tcin >> entry;","    \tq2.push(entry);","    }","    ","    while(q1.front() != q2.front() && q1.back() != q2.back())","    {","    \t","    \tint pop = q1.front();","    \tq1.pop();","    \tq1.push(pop);","    \tans++;","    }","    ","    cout << ans + N;","    return 0;","    ","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":36,"column":1},"action":"remove","lines":["#include <iostream>","using namespace std;","#include <queue>","","int main()","{","    int N, ans=0;","    cin >> N;","    queue <int> q1;","    queue <int> q2;","    for(int i = 0; i < N; i++)","    {","    \tint entry;","    \tcin >> entry;","    \tq1.push(entry);","    }","    ","    for(int i = 0; i < N; i++)","    {","    \tint entry;","    \tcin >> entry;","    \tq2.push(entry);","    }","    ","    while(q1.front() != q2.front() && q1.back() != q2.back())","    {","    \t","    \tint pop = q1.front();","    \tq1.pop();","    \tq1.push(pop);","    \tans++;","    }","    ","    cout << ans + N;","    return 0;","    ","}"],"id":11},{"start":{"row":0,"column":0},"end":{"row":46,"column":1},"action":"insert","lines":["#include <iostream>","using namespace std;","#include <queue>","","int main()","{","    int N, ans=0;","    cin >> N;","    queue <int> q1;","    queue <int> q2;","    for(int i = 0; i < N; i++)","    {","    \tint entry;","    \tcin >> entry;","    \tq1.push(entry);","    }","    ","    for(int i = 0; i < N; i++)","    {","    \tint entry;","    \tcin >> entry;","    \tq2.push(entry);","    }","","    ","    while(q1.size() != 0)","\t{    \t","    \tif(q1.front() == q2.front())","    \t{","    \t\tq1.pop();","    \t\tq2.pop();","    \t\tans++;","    \t\t","    \t}","    \telse","    \t{","    \t\tint temp = q1.front();","    \t\tq1.pop();","    \t\tq1.push(temp);","    \t\tans++;","    \t}","    }","    ","    cout << ans;","    return 0;","    ","}"]}],[{"start":{"row":43,"column":0},"end":{"row":43,"column":4},"action":"remove","lines":["    "],"id":12}],[{"start":{"row":42,"column":4},"end":{"row":43,"column":0},"action":"remove","lines":["",""],"id":13}],[{"start":{"row":33,"column":4},"end":{"row":33,"column":5},"action":"remove","lines":["\t"],"id":14}],[{"start":{"row":33,"column":0},"end":{"row":33,"column":4},"action":"remove","lines":["    "],"id":15}],[{"start":{"row":32,"column":6},"end":{"row":33,"column":0},"action":"remove","lines":["",""],"id":16}],[{"start":{"row":32,"column":5},"end":{"row":32,"column":6},"action":"remove","lines":["\t"],"id":17}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":7,"column":13},"end":{"row":7,"column":13},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1454499752248,"hash":"108b15d763860bca8c65b289a706428dddd6c7db"}