#include<stdio.h>
void main()
{   int a[10][10],a1,a2,b[10][10],b1,b2,i,j,k,c[100][100],sum=0;
    printf("enter the number of rows and columns for first matrix:\n");
    scanf("%d %d",&a1,&a2);
    printf("enter the elements for first matrix:\n");
    for (i=0;i<a1;i++)
    {
       for (j=0;j<a2;j++)
       {
           scanf("%d",&a[i][j]);
       }
    }

    printf("enter the number of rows and columns for second matrix:\n");
    scanf("%d %d",&b1,&b2);
    if (a2!=b1)
    {
        printf("matrix multiplication is not possible\n");

    }
    else
    {
        printf("enter the elements for second matrix:\n");
    for (i=0;i<b1;i++)
    {
       for(j=0;j<b2;j++)
       {
           scanf("%d",&b[i][j]);
       }
    }



    for(i=0;i<a1;i++)
    {
        for(j=0;j<b2;j++)
        {   c[i][j]=0;
            for(k=0;k<b1;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }

    printf("the product matrix is:\n");
    for (i=0;i<a1;i++)
    {
       for (j=0;j<b2;j++)
       {
           printf("%d\t",c[i][j]);
       }
       printf("\n");
    }
    }

}
