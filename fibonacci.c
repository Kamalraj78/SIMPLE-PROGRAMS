#include<stdio.h>
void main()
{
    int first_term=0,second_term=1,next_term,i,n;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("fibonacci series till n=%d is:\n",n);
    for(i=0;i<=n;i++)
    {
        if(i<2)
        {
           next_term=i;
        }
        else
        {
            next_term=first_term+second_term;
            first_term=second_term;
            second_term=next_term;
        }

        printf("%d\n",next_term);
    }
}
