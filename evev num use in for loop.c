#include<stdio.h>
int main(void)
{
    int count;
    char choice;
    for(count=0;count<10;count+=2)
    {
    printf("\n%d",count);
    count+=2;
    printf("\n press y to continue");
    scanf(" %c",&choice);
    }

}
