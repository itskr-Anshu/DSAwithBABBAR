#include<iostream>
#include<list>
using namespace std;

int main()
{
list<int> x;
     
    int sz = x.size();
    x.push_back(2);
    x.push_front(3);

    cout<<"Size of list : "<<sz<<endl;
    for(int i :x)
    {
        cout<<i<<" ";
    }
   
    cout<<endl<<"Element at first : "<<x.front()<<endl;
    cout<<endl<<"Element at Last : "<<x.back()<<endl;
}