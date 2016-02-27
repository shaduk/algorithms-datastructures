/** You are in an infinite 2D grid where you can move in any of the 8 directions :

 (x,y) to 
    (x+1, y), 
    (x - 1, y), 
    (x, y+1), 
    (x, y-1), 
    (x-1, y-1), 
    (x+1,y+1), 
    (x-1,y+1), 
    (x+1,y-1) 
You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.

**/

// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &X, vector<int> &Y) {

    int step = 0;
    int currentx = 0,currenty = 0;
    if(X.size() == 1)
    return 0;
    for(int i=0; i < X.size(); i++)
    {
        if(i != 0)
        step = step + max(abs(X[i] - currentx), abs(Y[i] -currenty));
        currentx = X[i];
        currenty= Y[i];
    }
    return step;
    
}
