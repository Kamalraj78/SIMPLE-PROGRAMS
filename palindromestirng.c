#include<stdio.h>
#include<string.h>
int checkpalindrome(char *s)
{
    int i,c=0,n;
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])
            c++;

    }
    if(c==i)
    return 1;
    else
    return 0;
}
void main()
{
    char s[1000];
    printf("enter the string:\n");
    scanf("%s",s);
    if(checkpalindrome(s))
       {

        printf("given string is palindrome");}
    else
       {

        printf("given string is not palindrome");}

}
