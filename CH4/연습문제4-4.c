#include <stdio.h>

int main(void) {
	const double inch = 2.54;
	double height, meter;

	printf("����� Ű�� �Է��ϼ���.\n");
	scanf("%lf", &height);
	meter = height * 0.01;
	printf("%.3lf���ʹ� %.2lf��ġ�Դϴ�.", meter, height / inch);


	return 0;
}