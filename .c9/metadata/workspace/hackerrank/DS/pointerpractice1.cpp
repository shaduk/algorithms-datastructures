{"changed":false,"filter":false,"title":"pointerpractice1.cpp","tooltip":"/hackerrank/DS/pointerpractice1.cpp","value":"#include <iostream>\n#include <stdlib.h>\nusing namespace std;\n\nvoid print() {\n    cout << \"hello\" << endl;\n}\n\nint* Add(int* a, int* b)\n{\n    int* c = (int*)malloc(sizeof(int)); \n    *c = *a + *b;\n    return c;   // Not a good idea to return address of function to main\n}\n\nint main()\n{\n    int a = 5, b = 2;\n    print();\n    cout << *(Add(&a, &b)) << endl;\n}","undoManager":{"mark":-1,"position":-1,"stack":[]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":20,"column":1},"end":{"row":20,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1459655332844}