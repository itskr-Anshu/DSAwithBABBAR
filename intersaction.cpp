#include<iostream>
using namespace std;

void print(int a[],int b[],int sa,int sb)
{
    
   
  
    for(int i =0;i<sa;i++)
    {    
        
         for(int j =0;j<sb;j++)
         {  
           
             if(a[i]==b[j])
             { 
                cout<<"Intersaction number is : "<<a[i]<<" "<<endl;
                b[j]=INT8_MIN;
                break;
             }
         }
    }

}

int main()
{
    int a[] = {1,2,3,4,5,5,8};
    int b[] = {6,7,8,1,3,5,1};
    int sa = sizeof(a)/sizeof(a[0]);
    int sb = sizeof(b)/sizeof(b[0]);
   

    print(a,b,sa,sb);

}