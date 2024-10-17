#include<iostream>
using namespace std;

int occ(int a[],int s,int e,int sz)
{  
     while(s<sz)
  {
    int count = 0;
    int x = s;
    // for(int i =0;i<sz;i++)
    // {
    //   if(x==a[i])
    //   {
    //     count++;
    //   }
    // }
   int i =0;
   while(i<sz)
   {
    if(x==a[i])
    {
        count++;
    }
    i++;
   }
   
   if(count!=0)
   { 
     
    if(count>1)
    {
         cout<<"Occurrence of "<<x<<" is = "<<count<<" , this is not unique "<<endl;

    }
    
  
   }
    return occ(a,s+1,e,sz);
  }
}


int main()
{
    int a[] = {1,1,2,3,3,3,2};
    int sz = sizeof(a)/sizeof(a[0]);
    int st = 0;
    int ed = sz-1;
    occ(a,st,ed,sz);

}