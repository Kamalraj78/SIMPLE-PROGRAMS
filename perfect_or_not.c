#include<stdio.h>
void main()
{
    int n,i,rem,sum=0;
    printf("enter the integer:\n");
    scanf("%d",&n);


    for(i=1;i<n-1;i++)
    {
        rem = n%i;
        if( rem == 0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("the given number is perfect");
    }
    else
    {
         printf("the given number is not perfect");
    }
}
