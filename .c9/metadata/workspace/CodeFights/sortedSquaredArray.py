{"filter":false,"title":"sortedSquaredArray.py","tooltip":"/CodeFights/sortedSquaredArray.py","undoManager":{"mark":3,"position":3,"stack":[[{"start":{"row":0,"column":0},"end":{"row":14,"column":0},"action":"insert","lines":["def sortedSquaredArray(array):","    i = 0","    j = len(array)-1","    ans = []","    while(i <= j):","        if(abs(array[i]) > abs(array[j])):","            ans.append(array[i]*array[i])","            i += 1","        else:","            ans.append(array[j]*array[j])","            j -= 1","    return ans[::-1]","    ","    ",""],"id":2}],[{"start":{"row":13,"column":4},"end":{"row":14,"column":0},"action":"remove","lines":["",""],"id":3}],[{"start":{"row":13,"column":0},"end":{"row":13,"column":4},"action":"remove","lines":["    "],"id":4}],[{"start":{"row":12,"column":4},"end":{"row":13,"column":0},"action":"remove","lines":["",""],"id":5}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":12,"column":4},"end":{"row":12,"column":4},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1495248694076,"hash":"00fec66b26ba519f60e2f13573d9f5dfe20856f0"}