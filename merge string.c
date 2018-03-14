#include<stdio.h>
 int main()
{
char a[50],b[50];
printf("enter 2 strings:");
gets(a);
gets(b);
strcat(a,b);
printf("The  merge string is: %s",a);
}
