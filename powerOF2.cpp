#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a ;
    cout<<"Enter the numaber :";
    cin>>a;
    bool  x = false;
    int i;
    for( i = 0;i<30;i++)
      {
        if(a==pow(2,i))
        {
           x = true;
          cout<<2<<"*"<<i<<"="<<a<<endl;
        }
      }
     if(x==true)
     {
        cout<<"YES";
     }
     else{
        cout<<"NO";
     }
}