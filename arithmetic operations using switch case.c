#include<stdio.h>
int main()
{
    int a,b;
    int op;
    printf("1.ADDITION\n 2.SUBRACTION\n 3.MULTIPLICATION\n 4.DIVISION\n");
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("enter your choice:");
    scanf("%d",&op);
    {   case 1:
        printf("%d+%d=%d",a,b,a+b);
        break;
        case 2:
        printf("%d-%d=%",a,b,a-b);
        break ;
        case 3:
        printf("%d*%d=%d",a,b,a*b);
        break;
        case 4:
        printf("%d%%d=%d",a,b,a%b);
        break;

    }
    return 0;
}
