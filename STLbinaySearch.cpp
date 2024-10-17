#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> a ;
    a.push_back(5);
    a.push_back(4);
    a.push_back(9);
    a.push_back(3);
    a.push_back(7);
    //Using BInay Search finding the value --> 
    cout<<"Number is found or not --> "<<binary_search(a.begin(),a.end(),5)<<endl;

    int x = 5;
    int y = 6;
    cout<<endl<<"Max "<<(x,y);
    cout<<endl<<"Min "<<(x,y);
    cout<<endl<<"x = "<<x<<" y = "<<y<<endl;
    swap(x,y);
    cout<<endl<<"After Swapping --> "<<" x = "<<x<<" y = "<<y<<endl;

    string z = "Anshu Kuamr";
    reverse(z.begin(),z.end());
    cout<<"Reverse of string --> "<<z<<endl;
}