#include<stdio.h>
void main(void)
{
int a,b,c;
a=10;
b=30;
printf("a=%d \nb=%d", a,b);
c=a;
a=b;
b=c;
printf("\nAfter swapping the value of a is =%d \nAfter swapping the value of b is =%d", a,b);
}
