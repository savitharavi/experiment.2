#include<stdio.h>
#include<conio.h>
int main()
{
int a=25,b=35;
printf("values of a and b before swapping%d,%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("values of a and b after swapping%d,%d",a,b);
return 0;
}
