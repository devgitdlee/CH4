#include <stdio.h>

int main(void) {
	double a = 4.0, b =1.2, pre;

	pre = a + b;
	printf("%.1lf + %.1lf = %.1lf\n", a, b, pre);
	pre = a - b;
	printf("%.1lf - %.1lf = %.1lf\n", a, b, pre);
	pre = a * b;
	printf("%.1lf * %.1lf = %.1lf\n", a, b, pre);
	pre = a / b;
	printf("%.1lf / %.1lf = %.1lf", a, b, pre);

	return 0;

}