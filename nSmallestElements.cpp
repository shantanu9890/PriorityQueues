#include<iostream>
#include<queue>
using namespace std;

priority_queue<int> nSmallestElements(int a[],int n,int k){
    priority_queue<int>p;
    for (int i = 0; i < k; i++)
    {
        p.push(a[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (a[i]<p.top())
        {
            p.pop();
            p.push(a[i]);
        }
        
    }
    return p;
}


int main(){
    int a[]={45,78,21,0,9,34,21,76,999,99,145,17};
    priority_queue<int>p=nSmallestElements(a,12,3);
    while (!p.empty())
    {
       cout<<p.top()<<" ";p.pop();
    }
    
}