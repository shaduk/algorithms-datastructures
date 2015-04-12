""" Problem Statement

https://www.hackerrank.com/challenges/alternating-characters

Shashank likes strings in which consecutive characters are different. For example, he likes ABABA, while he doesn't like ABAA. Given a string containing characters A and B only, he wants to change it into a string he likes. To do this, he is allowed to delete the characters in the string.

Your task is to find the minimum number of required deletions.

Input Format

The first line contains an integer T, i.e. the number of test cases. 
The next T lines contain a string each.

Output Format

For each test case, print the minimum number of deletions required.

Constraints

1≤T≤10 
1≤ length of string ≤105 """

# Enter your code here. Read input from STDIN. Print output to STDOUT

n = int(raw_input())
li = []
for i in range(n):
    j = raw_input()
    li.append(j)
    
for i in li:
    ans = 0
    i = i + 'D'
    for j in range(len(i)-1):
        if i[j+1]==i[j]:
            ans = ans +1
        
    print ans
