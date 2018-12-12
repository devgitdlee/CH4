#include <stdio.h>

int main(void) {
	const double inch = 2.54;
	double height, meter;

	printf("당신의 키를 입력하세요.\n");
	scanf("%lf", &height);
	meter = height * 0.01;
	printf("%.3lf미터는 %.2lf인치입니다.", meter, height / inch);


	return 0;
}