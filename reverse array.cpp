#include<iostream>
using namespace std;

int main()
{   int n,a[50],l,i;
    cout<<"enter the number of elements that you want to enter "<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
    
