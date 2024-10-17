#include<iostream>
using namespace std;

void add(int a[],int n,int b[],int m,int c[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j <m)
    {
        if(a[i]<b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    // if a[i] elemens is more than b[j] elements
    while(i<n)
        {
            c[k] = a[i];
            i++;
            k++;
        }
        // if a[i] elemens is less than b[j] elements
    while(j<m)
        {
            c[k] = b[j];
            j++;
            k++;
        }
}

void dis(int a[],int b[],int c[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[5] = {1,3,4,5,6};
    int b[3] ={2,7,8};
    int c[8];

    add(a,5,b,3,c);
    dis(a,b,c,8);
}