#include<stdio.h>
int main(void)
{
int phy,eng,math,pro,ict,sum,avg;
printf("Enter the marks for phy ");
scanf("%d",& phy);
printf("\nEnter the marks for eng ");
scanf("%d",& eng);
printf("\nEnter the marks for math ");
scanf("%d",& math);
printf("\nEnter the marks for pro ");
scanf("%d",& pro);
printf("\nEnter the marks for ict ");
scanf("%d",& ict);
printf("\nmarks of phy is =%d\nmarks od eng is =%d\nmarks of math is =%d\nmarks of pro is =%d\nmarks of ict is =%d", phy,eng,math,pro,ict);
sum=phy+eng+math+pro+ict;
printf("\nThe sum of all papers is %d", sum);
avg=sum/5;
printf("\nThe average of all papers is %d", avg);
}
