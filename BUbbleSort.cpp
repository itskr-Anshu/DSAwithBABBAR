#include<iostream>
using namespace std;

void mi(int a[],int sz)
{   int c = 1;
    int cc = 1;
    // for process round 1 to sz-1
    for(int i =1;i<sz;i++)
    {
       cout<<endl<<"Round "<<c++<<endl;
       for(int j = 0;j<sz-i;j++)
       { 
        // process run till sz-i th index
         if(a[j]>a[j+1])
        {
           swap(a[j],a[j+1]);
           
           cc++;
           
        }
         for(int i=0;i<sz;i++)
            {
            cout<<a[i]<<" ";
            }
            cout<<endl;
    
       }
   }
     cout<<endl<<"ccccccc "<<cc<<endl;
}  

void print(int a[],int sz)
  {
    cout<<endl<<"Finally"<<endl<<endl;
   
    for(int i=0;i<sz;i++)
    {
        cout<<a[i]<<" ";
    }
  
  }

int main()
{
     int a[] = {34,2,45,6,11};
     int sz = sizeof(a)/sizeof(a[0]);
     cout<<"size = "<<sz<<endl;
     mi(a,sz);
     print(a,sz);
  
}