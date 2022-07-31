#include<stdio.h>
void main()
{
    int n,i,a[20],d;
    printf("enter the total number of elements in array\n");
    scanf("%d",&n);
    printf("enter each element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }

    printf("enter the position of element that you want to delete\n");
    scanf("%d",&d);

    for(i=d;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("the array after deletion is:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d",i,a[i]);
    }


}
