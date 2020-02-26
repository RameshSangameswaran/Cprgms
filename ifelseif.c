#include<stdio.h>
int main()
{
int num1,num2;
printf("Input the two numbers num1 and num2\n");
scanf("%d %d", &num1, &num2);
if (num1 == num2)
{
printf("The given two numbers num1= %d and num2= %d are equal\n",num1,num2);
}
else if (num1 > num2)
{
printf("The given two numbers num1= %d > num2= %d\n",num1,num2);
}
else
printf("the given two numbers num1= %d < num2= %d\n",num1,num2);
}

