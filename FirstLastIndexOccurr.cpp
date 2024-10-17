#include<iostream>
using namespace std;

int firstprint(int a[],int st,int sz,int k)
{
   
   int ed= sz - 1;
   int mid = st + (ed - st)/2;
   int ans = -1;
   while(st<=ed)
   {
     if(a[mid]==k)
     { ans = mid;
       ed = mid - 1;
     }
     else if(a[mid]>k)
     {
        ed = mid - 1;
     } 
     else if (k>a[mid])
     {
        st =  mid+1;
     }
     mid =  st + (ed - st)/2;

   }

    return ans;
}

int lastprintl(int a[],int st,int sz,int k)
{
  int ed= sz - 1;
   int mid = st + (ed - st)/2;
   int ans =-1;
   while(st<=ed)
   {
     if(a[mid]==k)
     { ans = mid;
       st = mid + 1;
     }
     else if(a[mid]>k)
     {
        ed = mid - 1;
     } 
     else if (k>a[mid])
     {
        st =  mid+1;
     }
     mid =  st + (ed - st)/2;

   }

    return ans;
}


int main() 
{
    int a[] ={1,2,2,2,2,2,3,4,6,7,9,9,9,9,9,9};
    int s = 2;
    int sz = sizeof(a)/sizeof(a[0]);
    cout<<"size of array is : "<<sz<<endl;
     int x =  firstprint(a,0,sz,s);
     int y =  lastprintl(a,0,sz,s);
    
   
    if(x==-1&&y==-1)
    {
        cout<<"Not found "<<endl;
    }
    else
    {
    cout<<"First occurance at the index of :"<<firstprint(a,0,sz,s)<<endl;

    cout<<"last occurance at the index of :"<<lastprintl(a,0,sz,s)<<endl;

    cout<<endl<<"Toatl occurrance in the array of the element is = "<<(y-x)+1<<endl;
    }
    
    return 0;
}