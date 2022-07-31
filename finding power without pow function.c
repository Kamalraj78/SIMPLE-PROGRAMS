#include<stdio.h>
int pow(int b,int e)
{ int i,power=1;
  for(i=0;i<e;++i)
  {
      power=power*b;
  }
    return power;
}

void main()
{ int b,e;
  printf("enter the base value:\n");
    scanf("%d",&b);
    printf("enter the exponent value:\n");
    scanf("%d",&e);
    printf("%d^%d=%d",b,e,pow(b,e));

}
