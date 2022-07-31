#include<stdio.h>
int main()
{   int n,bin_n,remainder,deci_n=0,base=1;
    printf("enter the binary number\n");
    scanf("%d",&n);
    bin_n=n;
while(n>0)
{

    remainder=n%10; // 1 1
    deci_n=deci_n+remainder*base; // 1 1+1*2=3
    n=n/10; // 1 0
    base=base*2; // 2
     }

    printf("the decimal eqivalent of  %d is %d",bin_n,deci_n);


    return 0;
}
