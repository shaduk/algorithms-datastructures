# https://www.hackerrank.com/challenges/angry-children

n = input()
k = input()
candies = [input() for _ in range(0,n)]
candies.sort()

def min_diff(n,k,candies):
    mini = candies[k-1]-candies[0]
    for i in range(0,n-k+1):
        
        if candies[i+k-1]-candies[i]<mini:
            
            mini = candies[i+k-1]-candies[i]
    return mini
        


min_diff = min_diff(n,k,candies)## Write code here to compute the answer using (n, k, candies)

print min_diff