#include<stdio.h>
int main()
{
int a,arr[10],sum=0;
for(a=0;a<=9;a++)
{
printf("Enter number for array ");
scanf("%d",& arr[a]);
}
for(a=0;a<=9;a++)
printf("\nThe number of %d array is %d", '#',arr[a]);
for(a=0;a<=9;a++)
sum=sum+arr[a];
printf("\nThe sum of array is %d", sum);
}
