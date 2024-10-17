#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the  number :";
    cin>>a;
    bool b = true;
    if(a<=1)
    {
        b = false;
    }
    else{
        for(int i = 2;i<a/2;i++)
        {
            if(a%i==0)
            {
                b = false;
                break;
            }
        }
    }
    if(b)
    {
        cout<<"prime";
    }
    else{
        cout<<"Not prime";
    }
}