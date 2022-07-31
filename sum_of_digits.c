#include<stdio.h>
void main()
{   int n,copy_of_n,sum=0,remainder;
    printf("enter the number\n");
    scanf("%d",&n);
    copy_of_n=n;

    while(n>0)
    {
        remainder=n%10;
        sum+=remainder;
        n/=10;
    }
    printf("sum of digits in %d is %d",copy_of_n,sum);

}
