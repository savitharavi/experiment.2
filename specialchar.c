#include <stdio.h>
int main() 
{
	char s[25];
	int i,sum=0;
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(((s[i]>='0' && s[i]<='9')||(s[i]>='a' && s[i]<='z')||(s[i]<='A'&&s[i]<='Z')))
		{
sum=sum+1;	
	}
	}
	printf("\nThe special character is:%d",sum);
	return 0;
}
