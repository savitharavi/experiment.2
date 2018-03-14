#include<stdio.h>
void main()
{
  int a,sum=0,num,result;
  printf("enter the numbers:");
  scanf("%d",&a);
while(a!=0)
{
  num=a%10;
  sum=sum*10+num;
  a=a/10;
}
while(sum!=0)
{
  result=sum%10;
  printf("%d\t",result);
  sum=sum/10;
  
}
}
