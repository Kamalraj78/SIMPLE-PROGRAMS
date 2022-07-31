#include<stdio.h>
#include<math.h>
void main()
{
    int n,square,cube,result,b,e;
    float square_root;
    printf("enter the number to find its square,cube and square root:\n");
    scanf("%d",&n);
    square=n*n;
    cube=n*n*n;
    square_root=sqrt(n);
    printf("enter the base value:\n");
    scanf("%d",&b);
    printf("enter the exponent value:\n");
    scanf("%d",&e);
    result=pow(b,e);
    printf("the square of %d is %d\n",n,square);
    printf("the cube of %d is %d\n",n,cube);
    printf("the square root of %d is %f\n",n,square_root);
    printf("%d^%d=%d",b,e,result);

}
