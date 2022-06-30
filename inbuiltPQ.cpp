#include <iostream>
#include <queue>
using namespace std;



int main(){

   priority_queue<int>p;
   // its max priority queue by default;
   p.push(10);
   p.push(89);
   p.push(74);
   p.push(66);
   p.push(94);
   p.push(81);
   p.push(19);
   p.push(39);
   cout<<"size: "<<p.size()<<endl;
   while (!p.empty())
   {
    cout<<p.top()<<" ";
    p.pop();
   }
   

}