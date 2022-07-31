#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b)
    {
        if(a>=c)
        printf("%d is greator",a);
        else
        printf("%d is greator",c);

    }
    else
    {
        if(b>=c)
        printf("%d is greator",b);
        else
        printf("%d is greator",c);



    }
    //if(a>=b&&a>=c)
    //printf("%d is greator",a);
    //if(b>=a&&b>=c)
    //printf("%d is greator",b);
    //else //if(c>=b&&c>=a)
    //printf("%d is greator",c);
}

