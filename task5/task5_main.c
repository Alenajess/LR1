#include <stdio.h>

double f(double x, double y);

void main(void)
{
	double x = 41;
	double y = 14;
	double fres;
	fres = f(x,y);
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
