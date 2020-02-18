#include<stdio.h>
int main()
{
int a,n,pro=1;
printf("Enter any number to see factorial ");
scanf("%d",& n);
for(a=1;a<=n;a++)
pro=pro*a;
printf("%d", pro);
}
