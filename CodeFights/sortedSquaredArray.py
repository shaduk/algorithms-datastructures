def sortedSquaredArray(array):
    i = 0
    j = len(array)-1
    ans = []
    while(i <= j):
        if(abs(array[i]) > abs(array[j])):
            ans.append(array[i]*array[i])
            i += 1
        else:
            ans.append(array[j]*array[j])
            j -= 1
    return ans[::-1]
    