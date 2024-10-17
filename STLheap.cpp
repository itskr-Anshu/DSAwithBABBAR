#include<iostream>
#include<queue>
using namespace std;

int main()
{
 
// use for max Heap
priority_queue<int> x;
x.push(2);
x.push(1);
x.push(5);
x.push(9);
int sz = x.size();
for(int i =0;i<sz;i++)
{
    cout<<x.top()<<" ";
    x.pop();
}
cout<<endl;
// use for min Heap
priority_queue<int,vector<int>,greater<int>> y;
y.push(2);
y.push(1);
y.push(5);
y.push(9);
int szz = y.size();
for(int i =0;i<szz;i++)
{
    cout<<y.top()<<" ";
    y.pop();
}



}