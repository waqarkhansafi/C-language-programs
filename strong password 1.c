#include<stdio.h>
#include<ctype.h>

int length(char array[]);
int strongpwd(char array[]);

int main()
{

	char password[]="123456";
    char password2[]="mrkhan";
    char password3[]="mrkhan786";
	char password4[]="W@q@r_786";

  printf("\n01. Length of password:\t\t %s is %d", password, length(password));
  printf("\n02. Length of password2:\t %s is %d", password2, length(password2));
  printf("\n03. Length of password3:\t %s is %d", password3, length(password3));
  printf("\n04. Length of password4:\t %s is %d", password4, length(password4));

  printf("\n");

  printf("\n01. Strength of password:\t %s is %d", password, strongpwd(password));
  printf("\n02. Strength of password2:\t %s is %d", password2, strongpwd(password2));
  printf("\n03. Strength of password3:\t %s is %d", password3, strongpwd(password3));
  printf("\n04. Strength of password4:\t %s is %d", password4, strongpwd(password4));

	printf("\n");
	return 0;
}

int length(char array[])
{
	int length=0;
	int count=0;

	while(array[count] != '\0')
	{
		length++;
		count++;
	}

	return length;
}


int strongpwd(char array[])
{
  int strong = 0;

    int isLower = 0, isUpper = 0;
    int isDigit = 0, isalphnum = 0;
    int size = length(array);
    for(int i = 0; i<length(array); i++)
	{
      if (array[i] >= 65 && array[i] <= 90)
    	isUpper = 1;
      else  if (array[i] >= 97 && array[i] <= 122)
        isLower = 1;
    else if (array[i] >= 48 && array[i] <= 57)
        isDigit = 1;
    else
        isalphnum = 1;
	}
    if (isLower && isUpper && isDigit && isalphnum && (size >= 8))
	  strong = 1;

   return strong;
}
