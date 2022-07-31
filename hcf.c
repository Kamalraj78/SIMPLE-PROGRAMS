#include<stdio.h>
void main()
{
   int n1,n2,min,hcf=1,i;
  printf("enter the 2 numbers:\n");
  scanf("%d %d",&n1,&n2);
  min=(n1<n2)?n1:n2 ;
  for(i=1;i<=min;i++)
  {
      if(n1%i==0&&n2%i==0)
      {
          hcf=i;
      }
  }
   printf("the HCF of %d and %d is %d",n1,n2,hcf);
}
