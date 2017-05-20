#include <iostream>
using namespace std;


int maximum(int x, int y, int z) {
	int max = x; /* assume x is the largest */

	if (y > max) { /* if y is larger than max, assign y to max */
		max = y;
	} /* end if */

	if (z > max) { /* if z is larger than max, assign z to max */
		max = z;
	} /* end if */

	return max; /* max is the largest value */
} /* end function maximum */

int main() 
{
    int test;
    cin >> test;
    while(test--) 
    {
        int rows, cols, store[1000][1000], ans = 0;
        cin >> rows >> cols;
        for (int i = 0; i < rows; i++) 
        {
            if(i == 0)
            {
                for (int j = 0; j < cols; j++)
                {
                    int input;
                    cin >> input;
                    store[i][j] = input;
                }
            }
            else 
            {
                for (int j = 0; j < cols; j++)
                {
                    int input, n1 = 0, n2 = 0, n3 = 0;
                    cin >> input;
                    n1 = input + store[i-1][j];
                    if (j-1 != -1) n2 = input + store[i-1][j-1];
                    if (j+1 != cols) n3 = input + store[i-1][j+1];
                    store[i][j] = maximum(n1, n2, n3);
                    if(store[i][j] > ans) ans = store[i][j];
                }
            }
        }
        cout << ans << endl;
    }
}