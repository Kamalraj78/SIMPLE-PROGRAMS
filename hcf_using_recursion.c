#include<stdio.h>
int hcf(int n1,int n2)
{
    if(n2!=0)
        return hcf(n2,n1%n2);
    else
        return n1;
}
void main()
{   int n1,n2;
    printf("enter the 2 numbers:\n");
    scanf("%d %d",&n1,&n2);
    printf("the HCF of %d and %d is %d",n1,n2,hcf(n1,n2));

}
