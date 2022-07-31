#include<stdio.h>
void main()
{   int n,n1,rev=0,remainder;
    printf("enter the number\n");
    scanf("%d",&n);

    n1=n;
    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n/=10;
    }
    printf("reverse of a number %d is %d",n1,rev);

}
