#include<iostream>
using namespace std;

void print(int a[],int sz)
{
     for(int i = 0;i<sz;i++)
    {
        cout<<a[i]<<" ";
    }
}

void swap(int a[],int sz)
{
    int i = 0,j=sz-1;
    while(i<j)
    {
      while(a[i]==0 && i<j)
      {
        i++;
      }
      while(a[j]==1 && i<j)
      {
        j--;
      }
     if(i<j)
     {
         swap(a[i],a[j]);
          i++;
          j--;
     }
    }
}
 
int main() 
{
    int a[] ={0,1,0,1,1,0,0,1,0,1};
   
    int sz = sizeof(a)/sizeof(a[0]);
    int x = sz/2;
    swap(a,sz);
    print(a,sz);
   
}