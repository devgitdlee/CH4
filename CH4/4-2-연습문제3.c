#include <stdio.h>

int main(void) {
	short a;
	long b;


	printf("%s", sizeof(a) > sizeof(b) ? "short" : "long");

	return 0;

}