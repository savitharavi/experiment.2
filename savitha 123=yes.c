#include <stdio.h>
#include<string.h>
int main() 
{
	char a[50];
	int alp=0,one=0;
	scanf("%s",&a);
	int i,b;
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z'))
		{
			alp=1;
		}
		if('0'<=a[i] && a[i]<='9')
		{
			one=1;
		}
	}
	if(one==1 && alp==1)
	{
		printf("yes");
	}
	else
		printf("no");
}
