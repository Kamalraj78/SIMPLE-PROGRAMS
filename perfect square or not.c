#include<stdio.h>
#include<math.h>
int main()
{   int n,in;
    float fn;
    printf("enter the number\n");
    scanf("%d",&n);
    fn=sqrt(n);
    in=fn;
    if(in==fn)
    { printf("%d is a perfect square",n);
    }
    else
    {
        printf("%d is not a perfect square",n);

    }
return 0;


}
