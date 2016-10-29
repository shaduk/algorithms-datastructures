#include <iostream>
#include <stdlib.h>

using namespace std;

class MinHeap{
    
private:
    int H[1000];
    int size = 0;
    
    void Swap(int i, int j)
    {
        int temp = H[i];
        H[i] = H[j];
        H[j] = temp;
    }
    
    void ShiftUp(int s)
    {
        if(s > 1 && H[s] < H[s/2])
        {
            Swap(s, s/2);
            ShiftUp(s/2);
        }
    }
    
    void ShiftDown(int s)
    {
        int maxIndex = s;
        if(2*s <= size && H[maxIndex] > H[2*s])
            maxIndex = 2*s;
        if(2*s + 1 <= size && H[maxIndex] > H[2*s + 1])
            maxIndex = 2*s + 1;
        if(s != maxIndex)
        {
            Swap(s, maxIndex);
            ShiftDown(maxIndex);
        }
    }

    
public:
    void insert(int value)
    {
        size = size + 1;
        H[size] = value;
        ShiftUp(size);
    }
    
    int extractmin()
    {
        if(size <= 0)
        {
            cout << "Heap Empty";
            return -1;
        }
        int result = H[1];
        Swap(1,size);
        size = size-1;
        ShiftDown(1);
        return result;
    }
    
    int getmin()
    {
        return H[1];
    }
    
    int getsize()
    {
        return size;
    }
    
    bool isEmpty()
    {
        return (size==0);
    }
    
    void Print()
    {
        cout << "MinHeap: ";
        for(int i = 1; i <= size; i++)
            cout << H[i] << " ";
        cout << endl;
    }
};

class MaxHeap{
    
private:
    int H[1000];
    int size = 0;
    
    void Swap(int i, int j)
    {
        int temp = H[i];
        H[i] = H[j];
        H[j] = temp;
    }
    
    void ShiftUp(int s)
    {
        if(s > 1 && H[s] > H[s/2])
        {
            Swap(s, s/2);
            ShiftUp(s/2);
        }
    }
    
    void ShiftDown(int s)
    {
        int maxIndex = s;
        if(2*s <= size && H[maxIndex] < H[2*s])
            maxIndex = 2*s;
        if(2*s + 1 <= size && H[maxIndex] < H[2*s + 1])
            maxIndex = 2*s + 1;
        if(s != maxIndex)
        {
            Swap(s, maxIndex);
            ShiftDown(maxIndex);
        }
    }
    
public:
    void insert(int value)
    {
        size = size + 1;
        H[size] = value;
        ShiftUp(size);
    }
    
    
    int extractmax()
    {
        if(size <= 0)
        {
            cout << "Heap Empty";
            return -1;
        }
        int result = H[1];
        Swap(1,size);
        size = size-1;
        ShiftDown(1);
        return result;
    }
    
    int getmax()
    {
        return H[1];
    }
    
    int getsize()
    {
        return size;
    }
    
    bool isEmpty()
    {
        return (size==0);
    }
    
    void Print()
    {
        cout << "MaxHeap: ";
        for(int i = 1; i <= size; i++)
            cout << H[i] << " ";
        cout << endl;
    }
};

class MedianHeap{
    MinHeap minheap;
    MaxHeap maxheap;

    void checkbalance()
    {
        if(minheap.getsize()-maxheap.getsize() > 1)
        {
            int temp = minheap.extractmin();
            
            maxheap.insert(temp);
        }
        else if(maxheap.getsize()-minheap.getsize() > 1)
        {
            int temp = maxheap.extractmax();
            
            minheap.insert(temp);
        }
    }
public:
    

    void add(int value)
    {
        checkbalance();
        if(minheap.getsize() > 0 && value > minheap.getmin())
            minheap.insert(value);
        else if(maxheap.getsize() > 0 && value < maxheap.getmax())
            maxheap.insert(value);
        else
            minheap.insert(value);
        
    }
    
    int median()
    {
       if(minheap.getsize() > maxheap.getsize())
            return minheap.getmin();
        else
            return maxheap.getmax();
    }
    
    void Print()
    {
        minheap.Print();
        maxheap.Print();
    }

};

int main()
{
    MedianHeap medheap;
    medheap.add(5);

    cout << medheap.median() << endl;
    medheap.add(10);

    cout << medheap.median() << endl;
    medheap.add(7);

    cout << medheap.median() << endl;
    medheap.add(1);

    cout << medheap.median() << endl;
    medheap.add(6);

    cout << medheap.median() << endl;
    medheap.add(9);

    cout << medheap.median() << endl;
    medheap.add(12);

    cout << medheap.median() << endl;
    medheap.add(13);
    cout << medheap.median() << endl;
    
    
}