{"filter":false,"title":"puchiandluggage.cpp","tooltip":"/hackerearth/puchiandluggage.cpp","undoManager":{"mark":13,"position":13,"stack":[[{"start":{"row":0,"column":0},"end":{"row":81,"column":1},"action":"insert","lines":["#include <iostream>","using namespace std;","","int C[1000006],D[1000006];","","void Merge(int Arr[], int start, int end, int mid)","{","    int i = start, j = mid + 1; ","    int k = 0, count = 0;","    int lengthaux = end - start + 1;","    int Aux[lengthaux];","    ","    while(i <= mid && j <= end)","    {","        if(Arr[i] > Arr[j])","        {","        \tcount++;","            Aux[k++] = Arr[j++];","           ","        }","        else","        {","        \tC[Arr[i]]+=count;","            Aux[k++] = Arr[i++];","        }","    }","    ","    while(i <= mid)","    {","    \tC[Arr[i]]+=count;","        Aux[k++] = Arr[i++];","        ","    }","    ","    while(j <= end)","    {","        Aux[k++] = Arr[j++];","    }","    ","    for(int l = 0; l < lengthaux; l++)","    {","        Arr[start] = Aux[l];","        start++;","    }","    ","}","","void MergeSort(int Arr[], int start, int end)","{","   if(start < end){","    int mid = (start + end) / 2;","    MergeSort(Arr, start, mid);","    MergeSort(Arr, mid+1, end);","    Merge(Arr, start, end, mid);","   }","}","","int main()","{","\tint test;","\tcin >> test;","\twhile(test--)","\t{","\t\t","\t\tint noinputs;","\t\tcin >> noinputs;","\t\tint array[noinputs] ;","\t\tfor(int i = 0; i < noinputs; i++)","\t\t{","\t\t\tint inp;","\t\t\tcin >> inp;","\t\t\tarray[i] = inp;","\t\t\tD[i] = array[i];","\t\t}","\t\tMergeSort(array, 0, noinputs-1);","\t\tfor(int i = 0; i < noinputs; i++)","\t\t{","\t\t\tcout<<C[D[i]]<<\" \";","\t\t}","\t    cout<<\"\\n\";","\t}","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":4}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["*"],"id":5}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":[" "],"id":6}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":77},"action":"insert","lines":["https://www.hackerearth.com/code-monk-sorting/algorithm/puchi-and-luggage/"],"id":7}],[{"start":{"row":0,"column":77},"end":{"row":0,"column":78},"action":"insert","lines":[" "],"id":8}],[{"start":{"row":0,"column":78},"end":{"row":0,"column":79},"action":"insert","lines":["*"],"id":9}],[{"start":{"row":0,"column":79},"end":{"row":0,"column":80},"action":"insert","lines":["/"],"id":10}],[{"start":{"row":2,"column":0},"end":{"row":83,"column":1},"action":"remove","lines":["#include <iostream>","using namespace std;","","int C[1000006],D[1000006];","","void Merge(int Arr[], int start, int end, int mid)","{","    int i = start, j = mid + 1; ","    int k = 0, count = 0;","    int lengthaux = end - start + 1;","    int Aux[lengthaux];","    ","    while(i <= mid && j <= end)","    {","        if(Arr[i] > Arr[j])","        {","        \tcount++;","            Aux[k++] = Arr[j++];","           ","        }","        else","        {","        \tC[Arr[i]]+=count;","            Aux[k++] = Arr[i++];","        }","    }","    ","    while(i <= mid)","    {","    \tC[Arr[i]]+=count;","        Aux[k++] = Arr[i++];","        ","    }","    ","    while(j <= end)","    {","        Aux[k++] = Arr[j++];","    }","    ","    for(int l = 0; l < lengthaux; l++)","    {","        Arr[start] = Aux[l];","        start++;","    }","    ","}","","void MergeSort(int Arr[], int start, int end)","{","   if(start < end){","    int mid = (start + end) / 2;","    MergeSort(Arr, start, mid);","    MergeSort(Arr, mid+1, end);","    Merge(Arr, start, end, mid);","   }","}","","int main()","{","\tint test;","\tcin >> test;","\twhile(test--)","\t{","\t\t","\t\tint noinputs;","\t\tcin >> noinputs;","\t\tint array[noinputs] ;","\t\tfor(int i = 0; i < noinputs; i++)","\t\t{","\t\t\tint inp;","\t\t\tcin >> inp;","\t\t\tarray[i] = inp;","\t\t\tD[i] = array[i];","\t\t}","\t\tMergeSort(array, 0, noinputs-1);","\t\tfor(int i = 0; i < noinputs; i++)","\t\t{","\t\t\tcout<<C[D[i]]<<\" \";","\t\t}","\t    cout<<\"\\n\";","\t}","}"],"id":11}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"remove","lines":["",""],"id":12}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":13}],[{"start":{"row":2,"column":0},"end":{"row":85,"column":1},"action":"insert","lines":["#include <iostream>","#include<bits/stdc++.h>","using namespace std;","#define mem(A,val) memset(A,val,sizeof(A))","int C[1000006],D[1000006];","","void Merge(int Arr[], int start, int end, int mid)","{","    int i = start, j = mid + 1; ","    int k = 0, count = 0;","    int lengthaux = end - start + 1;","    int Aux[lengthaux];","    ","    while(i <= mid && j <= end)","    {","        if(Arr[i] > Arr[j])","        {","        \tcount++;","            Aux[k++] = Arr[j++];","           ","        }","        else","        {","        \tC[Arr[i]]+=count;","            Aux[k++] = Arr[i++];","        }","    }","    ","    while(i <= mid)","    {","    \tC[Arr[i]]+=count;","        Aux[k++] = Arr[i++];","        ","    }","    ","    while(j <= end)","    {","        Aux[k++] = Arr[j++];","    }","    ","    for(int l = 0; l < lengthaux; l++)","    {","        Arr[start] = Aux[l];","        start++;","    }","    ","}","","void MergeSort(int Arr[], int start, int end)","{","   if(start < end){","    int mid = (start + end) / 2;","    MergeSort(Arr, start, mid);","    MergeSort(Arr, mid+1, end);","    Merge(Arr, start, end, mid);","   }","}","","int main()","{","\tint test;","\tcin >> test;","\twhile(test--)","\t{","\t\t","\t\tint noinputs;","\t\tcin >> noinputs;","\t\tint array[noinputs] ;","\t\tfor(int i = 0; i < noinputs; i++)","\t\t{","\t\t\tint inp;","\t\t\tcin >> inp;","\t\t\tarray[i] = inp;","\t\t\tD[i] = array[i];","\t\t}","\t\tmem(C,0);","\t\tMergeSort(array, 0, noinputs-1);","\t\tfor(int i = 0; i < noinputs; i++)","\t\t{","\t\t\tcout<<C[D[i]]<<\" \";","\t\t}","\t    cout<<\"\\n\";","\t}","}"],"id":14}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":85,"column":1},"end":{"row":85,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1453577720329,"hash":"f48de3f9ffcfe3f7532f36019daae7aaa4773509"}