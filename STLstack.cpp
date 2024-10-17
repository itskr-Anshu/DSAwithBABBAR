#include<iostream>
#include<stack>
using namespace std;

int main()
{
stack<string> x;
     
    int sz = x.size();
    x.push("Anshu");
    x.push("Kumar");
    x.push("Paswan");

    cout<<"Size of list : "<<sz<<endl;
  
    cout<<endl<<"Element at first : "<<x.top()<<endl;

    x.pop();
    cout<<endl<<"Element at first : "<<x.top()<<endl;
    x.pop();
    cout<<endl<<"Element at first : "<<x.top()<<endl;


}


