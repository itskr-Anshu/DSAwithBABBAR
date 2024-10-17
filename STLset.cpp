#include<iostream>
#include<set>
using namespace std;

int main()
{
 
// use for max Heap
set<int> x;
x.insert(2);
x.insert(1);
x.insert(5);
x.insert(9);
x.insert(9);
x.insert(9);
int sz = x.size();
for(int i:x)
{
    cout<<i<<" ";
}
cout<<endl;
cout<<" present or not "<<x.count(4);
}