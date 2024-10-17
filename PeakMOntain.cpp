#include<iostream>
using namespace std;

int print(int a[],int st,int sz)
{
    
    int ed = sz-1;
    int mid = st + ( ed-st)/2;
    while(st<ed)
    {
        if(a[mid]<a[mid+1])
        {
            st = mid + 1;
        }
        else 
        {
            ed = mid;
        }
         mid = st + ( ed-st)/2;
    }
    return a[st];
}

int main()
{
    int a[] = {0,2,5,1};
    int sz = sizeof(a)/sizeof(a[0]);
    cout<<print(a,0,sz);
}