#include<stdio.h>
void main()
{
    FILE *fp;int c;
    fp=fopen(__FILE__,"r");//macro=__FILE__
    do{
        c=getc(fp);
        putchar(c);

    }
    while(c!=EOF);
    fclose(fp);
}
