#include <stdio.h>

int main(void) {

	double time, temp;
	int hour, minute, second;

	printf("����� �ð��� �Ҽ��� 2°�ڸ������� �Է��Ͻÿ�:");
	scanf("%lf", &time);

	hour = (int) time;
	temp = ((time - hour) * 60);
	minute = (int) temp;
	temp -= minute;
	second = (int) (temp * 60);

	printf("%.2lf�ð��� %d�ð� %d�� %d���Դϴ�.", time, hour, minute, second);

	return 0;


}