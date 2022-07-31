#include<stdio.h>
#include<string.h>
int main()
{   char str[100],strcpy1[100];
    int i;
    printf("enter the string\n");
    scanf("%[^\n]s",&str);//[^\n] - reading input text with space
    strcpy(strcpy1,str);
    //for(i=0;str[i]!='\0';i++)
    //{
       // strcpy1[i]=str[i];
    //}
    //strcpy1[i]='\0';
    printf("the copied string is %s\n",strcpy1);
   // printf("number of characters in copied string is %d\n",i);
return 0;
}
