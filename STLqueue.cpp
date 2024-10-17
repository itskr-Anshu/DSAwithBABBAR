#include<iostream>
#include<queue>
using namespace std;

int main()
{
queue<string> x;
     
    int sz = x.size();
    x.push("Anshu");
    x.push("Kumar");
    x.push("Paswan");

    cout<<"Size of list : "<<sz<<endl;
  
    cout<<endl<<"Element at first : "<<x.front()<<endl;

    // x.pop();
    cout<<endl<<"Element at first : "<<x.back()<<endl;
    x.pop();
    cout<<endl<<"Element at first : "<<x.front()<<endl;


}
