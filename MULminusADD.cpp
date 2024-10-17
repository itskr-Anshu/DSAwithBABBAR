#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number :";
    cin>>a;
    int sum = 0;
    int mul = 1;
   
   while (a>0)
   {
     int x = a%10;
     int y = a%10;
    
     sum = sum+x;
     mul = mul*x;
     a = a/10;
   }
   cout<<"Addition :"<<sum<<endl;
   cout<<"Multiplication :"<<mul<<endl;
   cout<<"finally answer MUL-ADD :"<<mul-sum<<endl;




  