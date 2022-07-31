#include<stdio.h>
int main()
{
    int a,b,c;


printf("swapping of 2 numbers\n");
printf("enter the two numbers:\n");
scanf("%d %d",&a,&b);

printf("\nbefore swapping A=%d B=%d",a,b);
c=a;a=b;b=c;
printf("\nafter swapping by temp variable method a=%d b=%d",a,b);

a=a+b;
b=a-b;
a=a-b;
printf("\nafter swapping by not using temp variable method a=%d b=%d",a,b);

a=a^b;b=a^b;a=a^b;
printf("\nafter swapping by xor method a=%d b=%d",a,b);

a=a+b-(b=a);
printf("\nafter simple statement method a=%d b=%d",a,b);

return 0;
}
