#include <stdio.h>

int main(void) {
	float a = 3.7;

	printf("소수점 버리는 값: %d\n", (int) a);
	printf("소수점 버리는 값: %d\n", (int) (a+0.5));

	return 0;
}