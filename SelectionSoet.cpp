#include<iostream>
using namespace std;

void mi(int a[],int sz)
{
     for(int i = 0;i<sz-1;i++)
    {
      int minx = i;
      for(int j = i+1;j<sz;j++)
      {
        if(a[j]<a[minx])
        minx = j;
      }
        swap(a[minx],a[i]);
    }
}
void print(int a[],int sz){
      for(int k = 0; k<sz;k++)
    {
        cout<<a[k]<<" ";
    }
  
}
int main()
{
     int a[] = {84,43,75,1,3,2,33,555,54,77,22};
     int sz = sizeof(a)/sizeof(a[0]);
     cout<<"size = "<<sz<<endl;
     mi(a,sz);
     print(a,sz);
  
}