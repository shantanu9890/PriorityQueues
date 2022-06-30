#include <iostream>
using namespace std;

void inplaceHeapSort(int pq[], int n)
{

    // build a heap in input array.
    for (int i = 1; i < n; i++)
    {
        int childIndex = i;
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

    //Remove elements
    int size=n;

    while (size>1)
    {
        int temp=pq[0];
        pq[0]=pq[size-1];
        pq[size-1]=temp;
        size--;

        int parentIndex = 0;
        int lChildIndex = 1;
        int rChildIndex = 2;
        //down heapify
        while (lChildIndex < size)
        {
            int minIndex=parentIndex;
            if (rChildIndex<size&&pq[rChildIndex]<pq[minIndex])
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
    // array will get sorted in decreasing order for min heap as 
    // we are removing smallest elmeent first and keeping it to last place.
     
}