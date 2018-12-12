#include <stdio.h>

int main(void) {

	const int sit = 70; //ÁÂ¼®¼ö 
	int pp; //°ü°´¼ö
	double in;

	printf("¿À´Ã ÀÔÀåÇÑ °ü°´¼ö:");
	scanf("%d", &pp);

	in = ((double)pp / sit) *100;
	printf("ÀÔÀå·ü : %.1lf%%", in);



}