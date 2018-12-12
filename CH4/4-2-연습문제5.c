#include <stdio.h>

int main(void) {

	double time, temp;
	int hour, minute, second;

	printf("계산할 시간을 소수점 2째자릿수까지 입력하시오:");
	scanf("%lf", &time);

	hour = (int) time;
	temp = ((time - hour) * 60);
	minute = (int) temp;
	temp -= minute;
	second = (int) (temp * 60);

	printf("%.2lf시간은 %d시간 %d분 %d초입니다.", time, hour, minute, second);

	return 0;


}