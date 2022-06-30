#include <iostream>
#include <vector>
using namespace std;

// minimum/maximum priority queue (minheap/maxheap) is also called as heap sort.
// insert/remove : O(log(n)) //equal to height of complete binary tree (cbt) which is log(n).
//getmin: O(1). 


class PriorityQueue
{

    vector<int> pq;

public:
    PriorityQueue()
    {
    }

    bool isEmpty()
    {
        return pq.size() == 0;
    }

    int getSize()
    {
        return pq.size();
    }

    int getMin()
    {
        if (isEmpty())
        {
            return 0;
        }
        return pq[0];
    }

    //if index of child is i, index of parent=(i-1)/2 ;
    //toggling and swapping elements bottom to top known as up-heapify;
    void insert(int element)
    {

        pq.push_back(element);
        int childIndex = pq.size() - 1;
        //up-heapify
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[parentIndex] > pq[childIndex])
            {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }

    //toggling and swapping elements top to bottom known as down-heapify;
    void removeMin()
    {
        if(isEmpty()){
            return;
        }

        pq[0] = pq[pq.size() - 1];
        pq.pop_back();

        int parentIndex = 0;
        int lChildIndex = 1;
        int rChildIndex = 2;
        //down heapify
        while (lChildIndex < pq.size())
        {
            int minIndex=parentIndex;
            if (rChildIndex<pq.size()&&pq[rChildIndex]<pq[minIndex])
            {
               minIndex=rChildIndex;
            }
            if (pq[lChildIndex]<pq[minIndex])
            {
               minIndex=lChildIndex;
            }
            if(minIndex==parentIndex){
               break;
            }
            int temp = pq[minIndex];
            pq[minIndex] = pq[parentIndex];
            pq[parentIndex] = temp;

            parentIndex = minIndex;
            lChildIndex = 2*parentIndex  + 1;
            rChildIndex = 2*parentIndex  + 2;
        }
    }



};