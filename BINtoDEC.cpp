#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the binay number ";
    cin>>a;

    int i = 0;
    int res = 0;
    while(a>0)
    {
        int last = a%10;
         a = a/10;
        if(last==1)
        {
           res += pow(2,i);
            
        }
            i++;
      
    }
    cout<<res;
    return 0;
}
