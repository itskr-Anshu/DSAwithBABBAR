#include<iostream>
using namespace std;

int print(int a[],int st,int sz,int k)
{
    for(int i =0;i<sz;i++)
    {
        //   cout<<" HI "<<endl;
        if(a[i]==k)
        {   
        // cout<<" Hello "<<endl;
        return i;
        }
    }
    
}

int printl(int a[],int st,int sz,int k)
{
    for(int i =sz;i>0;i--)
    {
        //   cout<<" HI "<<endl;
        if(a[i]==k)
        {   
        // cout<<" Hello "<<endl;
        return i;
        }
    }
    
}


int main() 
{
    int a[] ={1,2,2,2,2,2,3,4,6,7,9,9,9,9,9,9};
    int s = 2;
    int sz = sizeof(a)/sizeof(a[0]);
    cout<<"size of array is : "<<sz<<endl;
    int x =  print(a,0,sz,s);
    cout<<"First occurance at the index of :"<<print(a,0,sz,s)<<endl;
    int y =  printl(a,0,sz,s);
    cout<<"last occurance at the index of :"<<printl(a,0,sz,s)<<endl;

   
    return 0;
}