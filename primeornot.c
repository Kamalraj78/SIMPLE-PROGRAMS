#include<stdio.h>
int main()
{
    int n,temp=0;
    printf("enter the number\n");//9
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++) //i=2to4
    {
        if(n%i==0)
        {
            temp=1;
        }

    }
    if(temp==1)
        {
           printf("%d is not a prime number",n);
        }
        else
        {
            printf("%d is a prime number",n);
        }
return 0;
}
