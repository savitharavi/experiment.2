#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[25],num;
printf("Enter the array\n");
scanf("%d",&num);
printf("Enter the values\n");
for(i=0;i<num;i++)
{    
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
printf("array[%d]=%d",i,a[i]);
}
return 0;
}
