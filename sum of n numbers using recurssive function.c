#include<stdio.h>
int adnumbers(int n) ;
int main()
{int num;
 printf("enter an integer:");
 scanf("%d",&num);
 printf("sum=%d",addnumbers(num));
 return 0;

}
int addnumbers(int n){
   if(n!=0)
   return n + addnumbers(n-1);

   else
    return n;

}
