#include<stdio.h>
void main()
{
    int r,c,a[10][10],t[10][10],i,j;
    printf("enter the number of rows and columns:\n");
    scanf("%d %d",&r,&c);
    printf("enter the values of rows and columns:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the entered matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    printf("the transpose of the matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }











}
