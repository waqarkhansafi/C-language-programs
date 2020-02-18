#include<stdio.h>
int main(void)
{
int n,i,p;
printf("Enter the number for table ");
scanf("%d",& n);
for(i=1;i<=10;i++)
{
p=i*n;
printf("\n%d x %d = %d", n,i,p);
}
}
