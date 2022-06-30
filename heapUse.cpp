#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include "minpqClass.h"
#include "inplaceHeapSort.h"
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
cin.tie(NULL);

PriorityQueue p;

p.insert(3);
p.insert(7);
p.insert(9);
p.insert(6);
p.insert(44);
p.insert(97);
cout<<p.getMin()<<endl;
cout<<p.getSize()<<endl;


p.removeMin();
p.removeMin();
p.removeMin();
cout<<p.getMin()<<endl;
cout<<p.getSize()<<endl;
cout<<endl;

int a[]={7,3,8,3,9,24,59,17,27,72,35,0};
inplaceHeapSort(a,12);
for (int i = 0; i < 12; i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;



return 0;
}