#include <stdio.h>
#include <math.h>

void f(void);
double x = 2;
double y = 5;
double result;

void main(void)
{
	f();								
	printf("x = %.4lf\n", x);
	printf("y = %.4lf\n", y);
	printf("f = %.4lf\n", result);
	printf("x = ");
	scanf_s("%lf", &x);
	printf("y = ");
	scanf_s("%lf", &y);
	f();
	printf("f = %.4lf\n", result);
}

void f(void)
{
	result = ((x - 1)*sqrt(x) - ((y - 1)*sqrt(y))) / (sqrt(pow(x, 3)*y) + x * y + pow(x, 2) - x);
}