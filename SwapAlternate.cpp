#include<iostream>
using namespace std;

void swap(int a[],int st,int ed)
{
    int x = st;
    int y = st+1;
    while(y<=ed)
    {
        swap(a[x],a[y]);
        x+=2;
        y+=2;
    }
}

void print(int a[],int st,int ed)
{
    for(int i =0;i<ed;i++)
    {
      cout<<a[i]<<" ";
    }
}

int main()
{
    int a[6] = {1,2,3,4,5,6};
    int st = 0;
    int ed = 6;
    int sz = 6;
    swap(a,st,ed);
    print(a,st,ed);

}