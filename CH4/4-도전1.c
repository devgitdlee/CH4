#include <stdio.h>

int main(void)
{
	double kg, height, bml, mhei; //몸무게 키 체질량지수

	printf("몸무게(kg)와 키(cm) 입력:");
	scanf("%lf %lf", &kg, &height);

	mhei = height * 0.01;
	bml = kg / (mhei * mhei);
	printf("mhei = %.3lf bml = %.1lf\n", mhei, bml);
	printf("%s", bml >= 20.0 && bml < 25.0 ? "표준입니다." : "체중관리가 필요합니다.");

	return 0;

}