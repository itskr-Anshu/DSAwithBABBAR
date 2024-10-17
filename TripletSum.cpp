#include<iostream>
using namespace std;
 
int main() 
{
    int a[] ={1,2,3,4,5};
    int s = 12;
    int sz = sizeof(a)/sizeof(a[0]);
    for(int i= 0;i<sz;i++)
    {
        for(int j = 0;j<sz;j++)
        {
            for(int k = 0;k<sz;k++)
            {
              if(a[i]+a[j]+a[k]==s)
               {
                   cout<<a[i]<<" + "<<a[j]<<" + " <<a[k]<<" = "<<s<<endl;
               }
            }
        }
    }
}

