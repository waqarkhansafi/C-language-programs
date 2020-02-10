#include<stdio.h>
int main()
{
int a,b,ch;
printf("\nenter 1st number ");
scanf("%d",& a);
printf("\nenter 2nd number ");
scanf("%d",& b);
printf("\nchoose 1 for `sum`, 2 for `sub`, 3 for `multiplication`, 4 for `division`");
printf("\nenter ur choice ");
scanf("%d",& ch);
if (ch==1)
{
printf("\nsum of numbers is %d", a+b);
}
else if (ch==2)
printf("\nsub of numbers is %d", a-b);
else if (ch==3)
printf("\nmultiplicatin of numbers is %d", a*b);
else if (ch==4)
printf("\ndivision of numbers is %d", a/b);

else
printf("\nThe choice u entered is invalid");
}
