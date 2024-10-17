#include<iostream>
using namespace std;

void inser(int a[],int sz)
{    
     
    for(int i = 0;i<sz;i++)
      {
        int n = a[i];
        int j = i-1;
        // go to 0 to last element in the array
       while(j>=0 && a[j]>n)
       {
       
        //compare the elements
        if(n<a[j])
        {
            a[j+1] = a[j];
            j--;
        }
       }
       a[j+1] = n;
      }
}

void dis(int a[],int sz)
{
      for(int i = 0;i<sz;i++)
      {
        cout<<a[i]<<" ";
      }
}

int main()
{
     int a[] = {4,2,8,1,7};
     int sz = sizeof(a)/sizeof(a[0]);
     cout<<"size = "<<sz<<endl;
     inser(a,sz);
     dis(a,sz);
  
}