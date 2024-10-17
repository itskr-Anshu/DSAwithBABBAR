#include<iostream>
using namespace std;

void add(int a[],int b[],int x,int sa,int sb)
{
    int i = sa-1;
    int j = sb-1;
    int k = sa+sb-1;
    while(i>=0 && j>=0)
    {
        if(a[i]>b[j])
        {
            a[k--] = a[i--];
            cout<<"A --> "<<a[i]<<endl;
            

        }
        else
        {
            a[k--] = b[j--];
            cout<<"B --> "<<a[i]<<endl;
            
        }
    }
    // if a[i] elemens is more than b[j] elements
    while(j>=0)
        {
            a[k--] = b[j--];
            cout<<"C --> "<<a[i]<<endl;
            
        }
        // if a[i] elemens is less than b[j] elements
    // while(j>0)
    //     {
    //         a[k--] = b[j--];
    //         cout<<"D --> "<<a[i]<<endl;
            
    //     }
}

void dis(int a[],int b[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[8] = {1,3,4,5,6};
    int b[] ={2,7,8};
    int sa = 5;
    int sb = sizeof(b)/sizeof(b[0]);
    cout<< sa << " "<< sb <<endl;
    int x = sa+sb;
    add(a,b,x,sa,sb);
    dis(a,b,x);
}