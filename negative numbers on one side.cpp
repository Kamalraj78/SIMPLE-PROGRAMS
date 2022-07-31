#include<iostream>
using namespace std;
void shift(int a[],int n)
{
    int i,j=0;
    for(i=0;i<n;i++)//
    {if(a[i]<0)//-1 7
    {if(i!=j)// 0==0 1!=0
        swap(a[i],a[j]);
    j++;}}
    cout<<"RESULT"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
}

int main()
{
    int a[10],n,i;
    cout<<"enter the size of the array"<<endl;
    cin>>n;// 4
    cout<<"enter the each element"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];// -1 7 8 -2
    shift(a,n);

    return 0;
}


