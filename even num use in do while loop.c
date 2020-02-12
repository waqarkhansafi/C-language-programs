#include<stdio.h>
int main(void)
{
    int count;
    char choice;
    count=0;
    do
    {
    printf("\n%d",count);
    count+=2;
    printf("\n press y to continue");
    scanf(" %c",&choice);
    }
    while(choice=='y' || choice=='Y');
}
