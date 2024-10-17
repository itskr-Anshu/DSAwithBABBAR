#include<iostream>
using namespace std;

int main() 
{
   int a,b;
   cout<<"Enter the a nd b :"<<endl;
   cin>>a>>b;

   cout<<endl<<endl<<"1 for the addition :"<<endl;
   cout<<"2 for the subtraction :"<<endl;
   cout<<"3 for the multiplication :"<<endl;
   cout<<"4 for the division :";
    
   int choice ;
   cout<<endl<<endl<<"Enter the coice :"<<endl;
   cin>>choice;

   switch(choice)
   {
    case 1:
    {
        cout<<a+b<<endl;break;
    }
    case 2:
    {
        cout<<a-b<<endl;break;
    }
    case 3:
    {
        cout<<a*b<<endl;break;
    }
    case 4:
    {
        cout<<a/b<<endl;break;
    }
    default:
    {
        cout<<"NOt matched ";
    }
   }

}