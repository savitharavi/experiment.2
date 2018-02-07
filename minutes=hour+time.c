#include<stdio.h>
 int main()
{
    int hour,minutes,minute1,total;
    printf("Enter the minutes\n:");
    if(scanf("%d",&minutes)==1)
    {
        minutes=hour/60;
        total=minutes-minute1;
        printf("total hour=>%d hour");
        printf("total minutes=>%d minutes");
    }else
    {
        printf("error enter the correct values\n");
    }
    return 0;
}
