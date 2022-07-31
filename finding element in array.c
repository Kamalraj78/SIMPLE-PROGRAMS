#include<stdio.h>
void main()
{   int n,i,a[20],e;
    printf("enter the total number of elements in array\n");
    scanf("%d",&n);
    printf("enter each element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element that you want to search\n");
    scanf("%d",&e);
    i=0;// search starts from zeroth location

    while(i<n&&e!=a[i])
    {
        i++;
    }
    if(i<n)
    {
        printf("the element is found at the loaction :%d\n",i+1);
    }
    else
    {
        printf("the element is not found\n");
    }

}
