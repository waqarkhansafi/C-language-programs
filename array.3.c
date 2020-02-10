#include<stdio.h>
int main()
{
int a,arr[10],sum=0,max,min;
for(a=0;a<=9;a++)
{
printf("Enter the array number ");
scanf("%d",& arr[a]);
}
for(a=0;a<=9;a++)
printf("\nThe number of array is %d", arr[a]);
for(a=0;a<=9;a++)
sum=sum+arr[a];
printf("\nThe sum of array is %d", sum);
max=arr[0];
for(a=1;a<=9;a++)
    if(max<arr[a])
    max=arr[a];
printf("\nThe maximum number of array is %d", max);
min=arr[0];
for(a=0;a<=9;a++)
    if(min>arr[a])
 min=arr[a];
printf("\nThe minimum number of array is %d", min);
}
