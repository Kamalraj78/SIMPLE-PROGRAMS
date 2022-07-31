#include<stdio.h>
void main()
{   int n,index=0,binary[16],i;
    printf("enter the decimal number\n");
    scanf("%d",&n);

    while(n>0)
    {
        binary[index]=n%2;
        n=n/2;
        index++;
    }
    printf("the equivalent binary value is");
    for(i=index-1;i>=0;i--)
    {printf("%d",binary[i]);
}
}
