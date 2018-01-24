#include <stdio.h>
int main(void) 
{
int n,i,a;
printf("enter any positive integer\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
	a++;
}
}
if(a==2)
{
printf(" n isthe prime no");
}
else
{
	printf("n is not a prime no");
}
	return 0;
}


