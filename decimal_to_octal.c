#include<stdio.h>
void main()
{
    int n,count,i,octal[32],n1;
    printf("enter the positive number to find its octal value:\n");
    scanf("%d",&n);
    n1=n;
    count=0;

    while(n!=0)
    {
        octal[count]=n%8;
        n=n/8;
        count++;
    }
     printf("the octal value of %d is:\n",n1);
    for(i=(count-1);i>=0;i--)

        printf("%d",octal[i]);


}
