{"filter":false,"title":"ChocoFeast.cpp","tooltip":"/hackerrank/ChocoFeast.cpp","undoManager":{"mark":1,"position":1,"stack":[[{"start":{"row":0,"column":0},"end":{"row":23,"column":0},"action":"remove","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","int main(){","    int t;","    cin >> t;","    for(int a0 = 0; a0 < t; a0++){","        int n;","        int c;","        int m;","        int total = 0;","        cin >> n >> c >> m;","        total = n / c;","        if(total > c)","            total = total + total/m;","        cout << total << endl;","    }","    return 0;","}",""],"id":2},{"start":{"row":0,"column":0},"end":{"row":27,"column":0},"action":"insert","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","int main(){","    int t;","    cin >> t;","    for(int a0 = 0; a0 < t; a0++){","        int n;","        int c;","        int m;","        cin >> n >> c >> m;","        int choc = 0, total = 0;","        choc = n / c;","        total = choc;","        while(choc != 0)","            {","            choc = choc/m;","            total = total + choc; ","        }","        cout << total << endl;","    }","    return 0;","}",""]}],[{"start":{"row":0,"column":0},"end":{"row":27,"column":0},"action":"remove","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","int main(){","    int t;","    cin >> t;","    for(int a0 = 0; a0 < t; a0++){","        int n;","        int c;","        int m;","        cin >> n >> c >> m;","        int choc = 0, total = 0;","        choc = n / c;","        total = choc;","        while(choc != 0)","            {","            choc = choc/m;","            total = total + choc; ","        }","        cout << total << endl;","    }","    return 0;","}",""],"id":3},{"start":{"row":0,"column":0},"end":{"row":29,"column":0},"action":"insert","lines":["#include <cmath>","#include <cstdio>","#include <vector>","#include <iostream>","#include <algorithm>","using namespace std;","","int main(){","    int t;","    cin >> t;","    for(int a0 = 0; a0 < t; a0++){","        int n;","        int c;","        int m;","        cin >> n >> c >> m;","        int choc = 0, total = 0, wrap = 0;","        choc = n / c;","        wrap = choc;","        total = total + choc;","        while(wrap >= m)","            {","            choc = wrap / m;","            total = total + choc; ","            wrap = choc + wrap % m;","        }","        cout << total << endl;","    }","    return 0;","}",""]}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":29,"column":0},"end":{"row":29,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1462575786011,"hash":"afc7bff14e752191d13ae0718ecf82514bb5c05d"}