#include<stdio.h>
int main(void)
{
int arr[7],a,sum;
for(a=0;a<=6;a++)
{
printf("Enter the array number ");
scanf("%d",& arr[a]);
}
printf("\n value of 1st array is %d \n value of 2nd array is %d \n value of 3rd array is %d \n value of 4th array is %d \n value of 5th array is %d \n value of 6th array is %d \n value of 7th array is %d", arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6]);
sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6];
printf("\n\n sum of all arrays is %d", sum);
}
