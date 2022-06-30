#include<iostream>
#include<queue>
using namespace std;

void kSortedArray(int a[],int n,int k){
    priority_queue<int>p;
    
    for (int i = 0; i < k; i++)
    {
        p.push(a[i]);
    }
    int j=0;
    for (int i = k; i < n; i++)
    {
       a[j]=p.top();
       p.pop();
       p.push(a[i]);
       j++;
    }
    while (!p.empty())
    {
      a[j]=p.top();
       p.pop();
       j++;
    }
    
}

int main() {


   int a[]={10,12,6,7,9};
   kSortedArray(a,5,3);
   for (int i = 0; i < 5; i++)
   {
    cout<<a[i]<<" ";
   }
   cout<<endl;


    return 0;
}