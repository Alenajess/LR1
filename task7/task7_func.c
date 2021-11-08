#include <math.h>

double x = 4;
double y = 8;
double result;

void f(void)
{
	result = ((x - 1)*sqrt(x) - ((y - 1)*sqrt(y))) / (sqrt(pow(x, 3)*y) + x * y + pow(x, 2) - x);
}