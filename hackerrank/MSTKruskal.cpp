#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;


class MSTKruskal
    {
    int N, E, start = 1;
    vector<pair<int, int>> adj[1000001];
    vector<int> weights;
    int parent[4000];
    
    void Initialize()
        {
        for(int i = 1; i <= 3500; i++)
            {
           
            parent[i] = i;
        }
        
    }
    
    void Union(int i, int j)
        {
        int p = root(i);
        int q = root(j);
        parent[p] = q;
    }
    
    int root(int i)
        {
        while(i != parent[i])
            i = parent[i];
        return i;
    }
    
    bool IsSameSet(int i, int j)
        {
        return (root(i) == root(j)); 
    }
    
    void ReadData()
        {
        cin >> N >> E;
        while(E--)
            {
            int i, j, w;
            cin >> i >> j >> w;
            adj[w].push_back(make_pair(i, j));
            weights.push_back(w);
        }
        cin >> start;
    }
    
    void MST()
        {
        
        long long int total = 0;
        std::sort(weights.begin(), weights.end());
        weights.erase( unique( weights.begin(), weights.end() ), weights.end() );
        for(int i = 0; i < weights.size(); i++)
            {
            for(int j = 0; j < adj[weights[i]].size(); j++)
                {
                    if(!IsSameSet(adj[weights[i]][j].first, adj[weights[i]][j].second))
                       {
                           
                           total = total + weights[i];
                           Union(adj[weights[i]][j].first, adj[weights[i]][j].second);
                       }
        }
        }
               cout << total << endl;
    }
    
    public:
    
    void Solve()
        {
        Initialize();
        ReadData();
        MST();
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    MSTKruskal MST;
    MST.Solve();
    return 0;
}
