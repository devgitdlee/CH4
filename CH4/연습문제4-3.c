#include <stdio.h>

int main(void) {
	double kor = 3.8, eng = 4.4, mat = 3.9, avg;
	int skor = 3, seng = 5, smat = 4, res, tot;

	avg = (kor + eng + mat) / 3.0;
	tot = skor + seng + smat;
	res = (tot >= 10) && (avg >= 4.0);
	printf("학점: %d, 평점: %.1f\n", tot, avg);
	printf("%d", res);

	return 0;

}