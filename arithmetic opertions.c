#include<stdio.h>
int main()
{   int a,b,c,d,e,f;
    printf("21EE014 JAYASURYA K \n");
    printf("1.ADDITION 2.SUBRACTION 3.MULTIPLICATION 4.DIVISION OF TWO NUMBERS \n");
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("%d+%d=%d\n",a,b,c);
    printf("%d-%d=%d\n",a,b,d);
    printf("%d*%d=%d\n",a,b,e);
    printf("%d/%d=%d",a,b,f);
    return 0;
}
