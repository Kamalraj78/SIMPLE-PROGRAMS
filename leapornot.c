#include<stdio.h>
//int lyear(int year);

int main()
{   int n,i;
    //int lyear;
    printf("enter the value ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        if(lyear(i))
    printf("%d\t",i);

    }

return 0;
}
int lyear(int year)
    {
        if((year%400==0)||((year%100!=0)&&(year%4==0)))
            return 1;
        else
            return 0;

    }
