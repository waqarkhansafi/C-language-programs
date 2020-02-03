#include<stdio.h>
int main(void)
{
    int count;
    char choice;
    for(count=0;count<10;count++)
    {
    printf("\n%d",count);
    printf("\n press y to continue");
    scanf(" %c",&choice);
    }
}

