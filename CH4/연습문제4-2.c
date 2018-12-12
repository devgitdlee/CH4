#include <stdio.h>

int main(void) {
	int a = 70, b = 85;
	double c;

	
	
	printf("두 과목의 점수 :");
	scanf("%d %d", &a, &b);
	c = (a + b) / 2.0;
	printf("평균 : %.1lf", c);


}