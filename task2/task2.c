#include <stdio.h>
#include<math.h>

double f(double x, double y)					
{
	return ((x - 1)*sqrt(x) - ((y - 1)*sqrt(y))) / (sqrt(pow(x, 3)*y) + x * y + pow(x, 2) - x);
}

void main(void)
{
	double x = 12;
	double y = 8;
	double fres;
	fres = f(x, y);				   
	printf("x = %.4lf\n", x);
	printf("y = %.4lf\n", y);
	printf("f = %.4lf\n", fres);
	printf("x = ");
	scanf_s("%lf", &x);
	printf("y = ");
	scanf_s("%lf", &y);
	fres = f(x, y);
	printf("f = %.4lf\n", fres);
}

