 #include<stdio.h>
int main()
{
int array[10];
int size;
int i,j,t;
printf("Enter the size of array:");
scanf("%d",&size);
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
if(array[i]>array[j])
{
t=array[i];
array[i]=array[j];
array[j]=t;
}
}
}
for(i=0;i<size;i++)
{
printf("%d\t",array[i]);
}
return 0;
}
