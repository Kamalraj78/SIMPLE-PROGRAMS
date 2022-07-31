#include<stdio.h>
void main()
{   int i,n,t,sum=0; float avg;
    printf("enter how many numbers that you want to add and find average of:\n");
    scanf("%d",&n);
    printf("enter each element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&t);
        sum+=t;
    }
    avg=sum/n;
    printf("sum=%d avg=%f",&sum,&avg);
}
