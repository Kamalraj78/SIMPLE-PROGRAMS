#include<stdio.h>
void main()
{ int choice; float f,c;
   printf("1: farenheit->celsius\n2: celsius->farenheit\nenter the choice 1/2\n");
   scanf("%d",&choice);
   if(choice==1)
   {   printf("enter the value of farenheit\n");
       scanf("%f",&f);
       c=f-32/1.8;
       printf("celsius value for %f is %f",f,c);
   }
   else if(choice==2)
   {   printf("enter the value of celseus\n");
       scanf("%f",&c);
       f=c*1.8+32;
       printf("farenheit value for %f is %f",c,f);
   }

    else
    {
        printf("enter a valid choice!");
    }
}

