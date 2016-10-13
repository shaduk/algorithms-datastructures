#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <utility>
#include <climits>
#include <queue>
#include <algorithm>
using namespace std;

class HeapDS
{
private:
    int maxSize = 10000;
    int H[10000];
    int parent[1000];
    long long int key[10000];
    int size = 0;
    
    void swap(int i, int j)
    {
        int temp = H[i];
        H[i] = H[j];
        H[j] = temp;
        parent[H[i]] = i;
        parent[H[j]] = j;
    }
    
    void ShiftDown(int s)
    {
        int maxIndex = s;
        if(2*s <= size && key[H[maxIndex]] > key[H[2*s]])
            maxIndex = 2*s;
        if(2*s + 1 <= size && key[H[maxIndex]] > key[H[2*s + 1]])
            maxIndex = 2*s + 1;
        if(s != maxIndex)
        {
            swap(s, maxIndex);
            ShiftDown(maxIndex);
        }
    }
    
    void ShiftUp(int s)
    {
        if(key[H[s/2]] > key[H[s]])
        {
            swap(s, s/2);
            ShiftUp(s/2);
        }
    }
    
public:

    void ReducePriority(int s, int newp)
    {
        key[s] = newp;
        ShiftUp(parent[s]);
    }
    
    void Insert(int index, long long int priority)
    {
        if(size == maxSize)
        {
            cout << "Error" << endl;
            return;
        }
        size = size + 1;
        H[size] = index;
        parent[index] = size;
        key[index] = priority;
        ShiftUp(size);
    }
    
    bool isEmpty()
    {
        if(size <= 0)
            return true;
        return false;
    }
    
    int ExtractMin()
    {
        if(size <= 0)
        {
            cout << "Heap Empty";
            return -1;
        }
        int result = H[1];
        swap(1,size);
        size = size-1;
        ShiftDown(1);
        return result;
    }
    
    
};


class PrimsAlgo {
private:
    int N, E, start;
    vector< pair<int, int> > adj[4000];
    long long int key[4000];
    int parent[4000];
    bool visited[4000];
    HeapDS myheap;
    
    void initialize()
    {
        for(int i = 1; i <= N; i++)
            key[i] = INT_MAX;
        for(int i = 1; i <= N; i++)
            parent[i] = i;
        for(int i = 1; i <= N; i++)
            myheap.Insert(i, key[i]);
        for(int i = 1; i <= N; i++)
            visited[i] = false;
    }
    
    void ReadData()
    {
        cin >> N >> E;
        while(E--)
        {
            int i, j, w;
            cin >> i >> j >> w;
            adj[i].push_back(make_pair(j,w));
            adj[j].push_back(make_pair(i,w));
        }
        cin >> start;
    }
    
    
    int CalculateMST()
    {
        int visit, mst = 0;
        myheap.ReducePriority(start, 0);
        key[start] = 0;
        while(!myheap.isEmpty())
        {
            visit = myheap.ExtractMin();
            visited[visit] = true;
            
            for(int i = 0; i < adj[visit].size(); i++)
            {
                if(!visited[adj[visit][i].first] && (adj[visit][i].second < key[adj[visit][i].first]))
                {
                    key[adj[visit][i].first] = adj[visit][i].second;
                    myheap.ReducePriority(adj[visit][i].first, adj[visit][i].second);
                    parent[adj[visit][i].first] = visit;
                }
            }
        }
        for(int i = 1; i <= N; i++)
            mst = mst + key[i];
        return mst;
    }
    
public:
    void Solve()
    {
        ReadData();
        initialize();
        cout << CalculateMST() << endl;
    }
    
    void PrintMST()
        {
        for(int i = 1; i <= N; i++)
            cout << key[i] << " ";
            cout << endl;
    }
    
};

int main() {
    PrimsAlgo algo;
    algo.Solve();
    return 0;
}
