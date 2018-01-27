#include<stdio.h>
#include<conio.h>
int main()
{
int a1,a2,i;
char temp,num,rem;
printf("enter the 2 no's:");
scanf("%d %d",&a1,&a2);
printf("armstrong no between%d %dare:",a1,a2);
    for(i=a1+1;i<a2;++i)
{
    temp=i;
    num=0;
    while(temp!=0)

    num+=rem*rem*rem;
    temp/=10;
}
if(i==num)
{
    printf("%d",i);
    
}    

    return 0;
}

