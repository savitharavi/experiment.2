#include<stdio.h>
#include<conio.h>
int main()
{
int n,count=0;
printf("enter the no");
scanf("%d",&n)
while(n!=0)
{
n=n\10;
count++
}
printf("number of digits in an integer is "%d",count");
}
