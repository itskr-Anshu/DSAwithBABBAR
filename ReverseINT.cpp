// formula for  reversing integer ans = (ans * 10)+digit

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a ;
    cout<<"Enter the number :";
    cin>>a;

    int ans = 0;

    while(a>0)
    {
      int digit = a%10;
       if ((ans>pow(2,31)/10)||(ans<pow(2,-31)/10))    //Range of integer 
        {
            cout<<"0";
        }
      ans = ans * 10 + digit;
      a =a/10;
    } 
    cout<<ans;
}
