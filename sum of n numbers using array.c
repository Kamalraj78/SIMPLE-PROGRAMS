
#include<stdio.h>
int main()
{ int i,n,sum,a[10];
  printf("enter an integer:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      }sum=0;

  for(i=0;i<n;i++)
  {
      sum+=a[i];
  }
  printf("the result is %d",sum);
  return 0;

}
