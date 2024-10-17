#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> x;
     
    int sz = x.size();
    x.push_back(2);
    x.push_front(3);

    cout<<"Size of deque : "<<sz<<endl;
    for(int i :x)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"Element at 2nd : "<<x.at(1)<<endl;
    cout<<endl<<"Element at first : "<<x.front()<<endl;
    cout<<endl<<"Element at Last : "<<x.back()<<endl;
}