#include<iostream>
using namespace std;

void mov(int a[],int sa,int b[])
{    
    //  int n = sa-1;
    //  int k =n;
    //  int z = 0;
    //  for(int i = 0;i<=n;i++)
    // {
    //     if(a[i]==0)
    //     {
    //       b[k--] = a[i];
    //     }
    //     if(a[i]!=0)
    //     {
    //      b[z++] = a[i];
    //     }
    // }
    
        int j = 0;
        int n = sa;
        for(int i =0;i<n;i++)
        {
            if(a[i] != 0)
            {
                swap(a[i],a[j]);
                j++;
            }
        }
    }


void print(int a[],int sa,int b[])
{
   for(int i =0;i<sa;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[] = {0,1,0,3,0,4,0,5,6};
   
    int sa = sizeof(a)/sizeof(a[0]);
    int b[sa];
    mov(a,sa,b);
    print(a,sa,b);   
}