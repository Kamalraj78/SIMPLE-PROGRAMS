#include<stdio.h>
int main()
{
    int a,b,c;


printf("swapping of 2 numbers");
printf("enter the two numbers");
printf("%d %d,&a,&b");
printf("before swapping a=%d b=%d",a,b);
c=a;a=b;b=c;
printf("after swapping by temp variable method a=%d b=%d",a,b);

a=a+b;
b=a-b;
a=a-b;
printf("after swapping by not using temp variable method a=%d b=%d",a,b);

a=a^b;b=a^b;a=a^b;
printf("after swapping by xor method a=%d b=%d",a,b);

a=a+b-(b=a);
printf("after simple statement method a=%d b=%d",a,b);
}
