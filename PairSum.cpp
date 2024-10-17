#include<iostream>
using namespace std;
 
int main() 
{
    int a[] ={1,2,3,4,5,6,7};
    int s = 6;
    int sz = sizeof(a)/sizeof(a[0]);
    for(int i= 0;i<sz;i++)
    {
        for(int j = i+1;j<sz;j++)
        {
            if(a[i]+a[j]==s)
            {
                cout<<a[i]<<" + "<<a[j]<<" = "<<s<<endl;
            }
        }
    }
}

