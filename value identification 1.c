#include<stdio.h>
int main(void)
{
int a,b;
printf("Enter the value for a ");
scanf("%d",& a);
printf("Enter the value for b ");
scanf("%d",& b);
printf("\na=%d \nb=%d\n", a,b);
if(a>b)
  {
     printf("\na is greater then b ");
  }
else
     printf("\nb is greater then a ");
}
