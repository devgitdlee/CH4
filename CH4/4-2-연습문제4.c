#include <stdio.h>

int main(void) {

	const int sit = 70; //�¼��� 
	int pp; //������
	double in;

	printf("���� ������ ������:");
	scanf("%d", &pp);

	in = ((double)pp / sit) *100;
	printf("����� : %.1lf%%", in);



}