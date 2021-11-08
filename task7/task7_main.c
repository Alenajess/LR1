#include <stdio.h>
#include "func.h"
	
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
