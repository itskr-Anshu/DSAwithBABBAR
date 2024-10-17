#include<iostream>
using namespace std;

int dis(int n)
{
   int s = 0;
   int e = n;
   int mid = s +(e-s)/2;
   int ans = -1;
   while(s<=e)
   {
    
    int sq = mid*mid;

    if(sq==n)
    {
        return mid;
    }
    if(sq>n)
    {   
        ans = mid;
        e = mid - 1;
    }
    else if(sq<n)
    {
        s = mid+1;
    }
     mid = s +(e-s)/2;
   }
   return ans;
}

int main()
{
    int a = 121;
    int x = a;
    cout<<"Squre root of the " <<a<<" is = "<<dis(a);

}