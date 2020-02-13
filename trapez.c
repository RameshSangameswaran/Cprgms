#include<stdio.h>
float main()
{
float area,a,b,h;
printf("Input the value of a b and h\n");
scanf("%f %f %f", &a, &b, &h);
area = (a+b)*0.5*h;
printf("The value of a=%.2f b=%.2f and h=%.2f\n",a,b,h);
printf("The area of a trapezium = %.2f cm square\n",area);
}
