# You have a sorted array of integers. Write a function that returns a sorted array containing the squares of those integers.

# Example

# For array = [-6, -4, 1, 2, 3, 5], the output should be
# sortedSquaredArray(array) = [1, 4, 9, 16, 25, 36].

# The array of squared integers from array is: [36, 16, 1, 4, 9, 25]. When sorted, it becomes: [1, 4, 9, 16, 25, 36].

#Using two pointer technique to solve this problem

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
    