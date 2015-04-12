# https://www.hackerrank.com/challenges/game-of-thrones

string = raw_input()
found = False
count = 0
# Write the code to find the required palindrome and then assign the variable 'found' a value of True or False

alpha = "abcdefghijklmnopqrstuvwxyz"
for i in alpha:
    if i in string:
        if string.count(i)%2==0:
            found = True
        elif count==0:
           
            count = 1
            found = True
        else:
            
            found = False
            break
    
       
if not found:
    print("NO")
else:
    print("YES")
