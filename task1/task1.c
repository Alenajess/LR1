#include <stdio.h>
#include<math.h>

void main(void)
{
	double x = 15;
	double y = 10;
	double f;						
	f = ((x - 1)*sqrt(x) - ((y - 1)*sqrt(y))) / (sqrt(pow(x, 3)*y) + x * y + pow(x, 2) - x);
	printf("x = %.4lf\n", x);		
	printf("y = %.4lf\n", y);
	printf("f = %.4lf\n", f);		
	printf("x = ");					 
	scanf_s("%lf", &x);		
	printf("y = ");
	scanf_s("%lf", &y);
	f = ((x - 1)*sqrt(x) - ((y - 1)*sqrt(y))) / (sqrt(pow(x, 3)*y) + x * y + pow(x, 2) - x);
	printf("f = %.4lf\n", f);					
}

