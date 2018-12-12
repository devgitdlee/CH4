#include <stdio.h>

int main(void) {
	int a = 10, b = 20;
	int res = 2;

	//a += 20;
	a -= 20;
	//a &= 11;
	//a |= 11;
	//a ^= 5;
	//a &= 11;
	//a >>= 1;
	//a <<= 1;

	//res *= b + 10;
	res /= b - 4;
	//res %= b - 4;

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d \n", res);

	return 0;

}