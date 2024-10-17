#include<iostream>
using namespace std;
int main()
{
    int a =0;
    int b = 1;
    int sum = 0;
    cout<<a<<" "<<b<<" ";
    for(int i =1;i<=10;i++)
    {  sum = a+b;
       cout<<sum<<" ";
       a =b;
       b = sum;
    }
}