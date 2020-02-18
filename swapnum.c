#include<stdio.h>
int main()
{
int num1,num2,temp;
printf("Read the first number\n");
scanf("%d", &num1);
printf("Read the second number\n");
scanf("%d", &num2);
printf("The original input numbers are %d and %d \n",num1,num2);
temp=num1;
num1=num2;
num2=temp;
printf("The swapped numbers are %d and %d \n",num1,num2);
}

