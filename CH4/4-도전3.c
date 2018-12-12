#include <stdio.h>

int main(void) {

	double time, temp; 
	int hour, minute; //시간, 분
	double second, km, speed; //초, 거리, 속력

	printf("거리와 속력 입력:");
	scanf("%lf %lf", &km, &speed);
	
	time = km / speed;
	hour = (int)time;
	temp = ((time - hour) * 60);
	minute = (int)temp;
	temp -= minute;
	second = temp * 60;

	printf("소요 시간은 %d시간 %d분 %.3lf초입니다.", hour, minute, second);

	return 0;


}