#include<stdio.h>
void main()
{
    int n,i,j,prime;
    printf("enter the number to find its prime factors:\n");
    scanf("%d",&n);//21
    for(i=2;i<=n;i++)
       {

        if(n%i==0)
         {prime=1;



       for(j=2;j<=i/2;j++)
            {if(i%j==0)
           {

            prime=0;
            break;}}
if (prime==1)
         {

            printf("the prime factors are %d\n",i);} //3
       }}

}
