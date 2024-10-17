#include<iostream>
using namespace std;

int print(int a[],int st ,int sz,int k)
{   int ed = sz-1;
    int mid = (st+ed)/2;
    cout<<mid<<endl;
    while(st<=ed)
    {
        
        if(a[mid]==k)
        {
            return mid;
        }
        if(k>a[mid])
        {
            st = mid+1;
            cout<<" start "<<st<<endl;
        }
        else{
            ed = mid-1;
            cout<<" end "<<ed<<endl;
        }
         mid = (st+ed)/2;
         cout<<mid<<endl;
    }
    return -1;
}
 
int main() 
{
    int a[] ={1,3,4,6,7,9,23};
    int s = 5;
    int sz = sizeof(a)/sizeof(a[0]);
    int x = print(a,0,sz,s);
    if(x!=-1)
    {
        cout<<"index of "<<s<<" is = "<< x;
    }
    else{
        cout<<"Not preset";
    }

}