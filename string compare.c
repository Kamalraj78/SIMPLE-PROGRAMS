#include<stdio.h>
//#include<string.h>
void main()
{   char str1[100],str2[100];
    int i;
    printf("enter the two strings\n");
    scanf("%s %s",str1,str2);
    for(i=0;str1[i]==str2[i]&&str1[i]=='\0';i++);// semicolon at last indicates there is no body for the loop
        //strcpy(str1,str2);
        if (str1[i]>str2[i])
        printf("%s is greator than %s\n",str1,str2);

        else if (str1[i]<str2[i])
        printf("%s is greator than %s\n",str2,str1);

        else
        printf("%s is equal to %s\n",str1,str2);
}
