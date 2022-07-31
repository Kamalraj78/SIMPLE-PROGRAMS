#include<stdio.h>
void main()
{   int n,copy_of_n,remainder,sum=0;
    printf("enter the number\n");//153
    scanf("%d",&n);
    copy_of_n=n;//153
    while(n!=0)
    {
       remainder=n%10;//remainder=3 5 1
       sum+=remainder*remainder*remainder;//sum=27 +125+1 =153
       n/=10;//n=15 1
    }
    if(copy_of_n==sum)
    {
       printf("%d is an avagadro number",copy_of_n);
    }
    else
    {
        printf("%d is not an avagadro number",copy_of_n);
    }
}
