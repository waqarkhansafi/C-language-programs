#include<stdio.h>
int main(void)

{
int ch;
printf("enter the number for day ");
scanf("%d",& ch);
switch(ch)
{
case(1):
printf("\nmonday");
break;
case(2):
printf("\ntuesday");
break;
case(3):
printf("\nwednesday");
break;
case(4):
printf("\nthursday");
break;
case(5):
printf("\nfriday");
break;
case(6):
printf("\nsaturday");
break;
case(7):
printf("\nsunday");
break;
default:
    printf("\nthis number is invalid\n");
}
printf("\n\nby: WAQAR KHAN SAFI");
}
