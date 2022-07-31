#include<stdio.h>
void main()
{
    int n,i,m;
    printf("enter the number till which you want prime numbers\n");
    scanf("%d",n);
    printf("the prime numbers till %d is:\n",n);
    m=0;
    while(m<=n)
    {
        for(i=2;i<=m;i++)
        {
            if(m%i==0)
                break;
        }
        if(i==m)
            printf("%d\n",m);
            m++;
    }
    printf('\n');
}
