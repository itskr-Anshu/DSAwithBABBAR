#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int ,4> x = {3,2,4,5};
    int sz = x.size();
    cout<<"Size of Array : "<<sz<<endl;
    for(int i = 0;i<sz;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl<<"Element at 2nd : "<<x.at(2)<<endl;
    cout<<endl<<"Element at first : "<<x.front()<<endl;
    cout<<endl<<"Element at Last : "<<x.back()<<endl;
    // Empty or Not : 0 means False or 1 means True
    cout<<endl<<"Array is empty : "<<x.empty()<<endl;
}