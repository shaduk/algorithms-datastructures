
'''
Note: Try to solve this task in-place (with O(1) additional memory), since this is what you'll be asked to do during an interview.

You are given an n x n 2D matrix that represents an image. Rotate the image by 90 degrees (clockwise).

Example

For

a = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]
the output should be

rotateImage(a) =
    [[7, 4, 1],
     [8, 5, 2],
     [9, 6, 3]]
     
'''

def rotateImage(a):
    for layer in range(0, len(a)/2):
        start = layer
        end = len(a) - layer - 1
        for i in range(start, end):
            n = len(a) - 1
            temp = a[layer][i]
            a[layer][i] = a[n - i][layer]
            a[n - i][layer] = a[n - layer][n - i]
            a[n - layer][n - i] = a[i][n - layer]
            a[i][n - layer] = temp 
    return a
        

