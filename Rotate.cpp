#include<iostream>
using namespace std;

void rt(int a[],int r,int s,int b[])
{
    
    // use new array b[] because it will not override 
    for(int i = 0;i<s;i++)
    {    
              // if  i = 4 , r = 2 and size = 5 then (4+3)%5=2 
              // so it go to at 2nd index
              b[(i+r)%s] = a[i];  
    }
}

void print(int a[],int r,int s,int b[])
{
    
    for(int i = 0;i<s;i++)
    {
       cout<<b[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int a[] = {1,2,3,4,5};
    
   
    int s = sizeof(a)/sizeof(a[0]);
    int b[s];
    int r = 4;
    rt(a,r,s,b);
    print(a,r,s,b);
}