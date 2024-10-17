#include<iostream>
using namespace std;

void rev(int a[],int s,int e)
{ 
    
    while(s<=e)
    {   
        swap(a[s],a[e]);
        s++;
        e--;
    }

}

void print(int a[],int s,int e)
{
    for(int i =0;i<=e;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[6]={1,2,3,4,5,6};
    int size = 6;
    int start = 0;
    int end = 5;
    rev(a,0,end);
    print(a,start,end);
}