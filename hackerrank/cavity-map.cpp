#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0;grid_i < n;grid_i++){
       cin >> grid[grid_i];
    }
    for(int grid_i = 0; grid_i < n; grid_i++)
        {
        for(int i = 0; i < n; i++)
         {
            if(i != 0 && i != n-1)
            {
            if(grid[grid_i][i-1] < grid[grid_i][i] && grid[grid_i][i+1] < grid[grid_i][i])
                grid[grid_i][i] = 'X';
        }
        }
            
    }
    for(int grid_i = 0;grid_i < n;grid_i++){
       cout << grid[grid_i] << endl;
    }
    return 0;
}
