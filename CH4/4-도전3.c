#include <stdio.h>

int main(void) {

	double time, temp; 
	int hour, minute; //�ð�, ��
	double second, km, speed; //��, �Ÿ�, �ӷ�

	printf("�Ÿ��� �ӷ� �Է�:");
	scanf("%lf %lf", &km, &speed);
	
	time = km / speed;
	hour = (int)time;
	temp = ((time - hour) * 60);
	minute = (int)temp;
	temp -= minute;
	second = temp * 60;

	printf("�ҿ� �ð��� %d�ð� %d�� %.3lf���Դϴ�.", hour, minute, second);

	return 0;


}