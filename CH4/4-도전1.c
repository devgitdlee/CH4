#include <stdio.h>

int main(void)
{
	double kg, height, bml, mhei; //������ Ű ü��������

	printf("������(kg)�� Ű(cm) �Է�:");
	scanf("%lf %lf", &kg, &height);

	mhei = height * 0.01;
	bml = kg / (mhei * mhei);
	printf("mhei = %.3lf bml = %.1lf\n", mhei, bml);
	printf("%s", bml >= 20.0 && bml < 25.0 ? "ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");

	return 0;

}