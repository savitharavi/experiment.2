#include<stdio.h>
int main()
{
int i,first,second;
printf("enter the begin value\n:");
scanf("%d",&first);
printf("enter the end value\n:");
scanf("%d",&second);
printf("all odd numbers from %d to %d are\n:",first,second);
if(first%2==0)
{
first++;
}
for(i=first;i<=second;i+=2)
{
printf("%d\n",i);
}
return 0;
}
