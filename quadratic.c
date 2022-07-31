#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c,root1,root2,realpart,imaginarypart,discriminant;
  printf("enter the co efficients:\n");
  scanf("%f %f %f",&a,&b,&c);
  discriminant= b*b-4*a*c;
  if(discriminant>0)
    {root1=(-b+sqrt(discriminant))/(2*a);
    root2=(-b-sqrt(discriminant))/(2*a);
    printf("root1=%.2f root2=%.2f",root1,root2);}

  else if(discriminant==0)
   {

    root1=root2= -b/(2*a);
    printf("root1=root2=%.2f",root1);}
  else

   {

    realpart=-b/(2*a);
  imaginarypart=sqrt(-discriminant)/(2*a);
  printf("root1=%.2f+%.2fi root2=%.2f-%.2fi",realpart,imaginarypart,realpart,imaginarypart);}


}
