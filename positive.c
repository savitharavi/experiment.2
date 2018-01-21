#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter any integer");
scanf("&d",&n);
if(n<=0)
{
if(n==0)
{
printf("given no is zero");
}
else
{
printf("given no is negative");
}
}
else
{
printf("given no is positive");
}
return 0;
}
