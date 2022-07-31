#include<stdio.h>
int main()
{
    int n,original,remainder,rev=0;
    printf("enter the number\n");
    scanf("%d",&n);
    original=n; // 121
    while(n!=0)
    { remainder =n%10; //  1
      rev =rev*10+remainder;// rev=1
      n /=10;//n=12 2
    }

    if(original==rev)
    { printf("%d is palindrome",original);}
    else
    {
        printf("%d is not palindrome",original);
    }



    return 0;



}
