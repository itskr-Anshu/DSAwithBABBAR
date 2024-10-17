#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a ;
    cout<<"capacity --> "<<a.capacity()<<endl;
    a.push_back(5);
    cout<<"capacity --> "<<a.capacity()<<endl;
    a.push_back(4);
    cout<<"capacity --> "<<a.capacity()<<endl;
    a.push_back(9);
    cout<<"capacity --> "<<a.capacity()<<endl;
    a.push_back(3);
    cout<<"capacity --> "<<a.capacity()<<endl;
    a.push_back(7);
    cout<<"capacity --> "<<a.capacity()<<endl;
    int sz = a.size();
    for(int i :a)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"Element at 2nd --> "<<a.at(2)<<endl;

    cout<<"Element at first : "<<a.front()<<endl;
    cout<<"Element at Last : "<<a.back()<<endl;

   a.pop_back();
     for(int i : a)
    {
        cout<<i<<" ";
    }
  

}