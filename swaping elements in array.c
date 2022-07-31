#include<stdio.h>
void main()
{   int n,i,a[i],temp;
    printf("enter the total number of elements in array\n");
    scanf("%d",&n);
    if(n%2!=0)
    {printf("enter the even value\n");}
    else{
    printf("enter each element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+=2)
    {temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;}
    printf("after swapping!");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }}
}
