#include<stdio.h>
int main()
{
int a,b;
printf("The given input values of a and b are\n");
scanf("%d %d", &a, &b);
if (a > b)
{
	printf("a is %d is greater than b %d\n",a,b);
}
else
{
	printf("b is %d is greater than a %d\n",b,a);
}
}

