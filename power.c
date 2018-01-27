#include<stdio.h>
int main()
{
    int first,second;
    int result=1;
    int i = 0;
    printf("Enter a number : ");
    scanf("%d",&second);
    printf("Power : ");
    scanf("%d",&first);
    for(i = 0;i<first;i++){
        result = result * second;
    }
    printf("%d to the first of %d is = %d\n",second,first,result);
    return 0;
}
