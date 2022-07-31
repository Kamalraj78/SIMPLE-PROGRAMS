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
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(l>a[i])
        {
            l=a[i];

        }

    }
    cout<<"the smallest element in array is"<<l;
    return 0;
}
