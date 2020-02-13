#include<stdio.h>
float main()
{
float pi,r,area;
pi=3.14152;
printf("Key in the value of r\n");
scanf("%f", &r);
area=pi*(r*r);
printf("The value of pi=%.2f and the given value of r=%.2f\n",pi,r);
printf("The area of a circle=%.2f\n",area);
}

