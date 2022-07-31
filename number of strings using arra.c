

#include<stdio.h>
int main()
{
    int count=0,i=0;
    char a[10];
    printf("enter the characters:");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    printf("number of strings= %d",count);
    return 0;
}
