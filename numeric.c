#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,i,n;
char b[50];
printf("enter the string:");
scanf("%s",&b);
n=strlen(b);
for(i=0;i<n;i++)
{
if(b[i]>='0'&&b[i]<='9')
{
a++;
}
}
printf("The numeric value is:%d",a);
return 0;
}
