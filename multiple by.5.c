#include <stdio.h>

int main(void) {
	int i,n;
           printf("\n Please Give The Value of N:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            printf("\n5*%d = %d",i,5*i);
        }
	return 0;
}
