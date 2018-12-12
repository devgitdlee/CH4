#include <stdio.h>

int main(void) {
	int a, b, c, d; //동전
	int ddm, kkb; //또또면 꽁꽁바
	int ddmp = 70, kkbp = 30; //또또면 꽁꽁바 개당 가격
	int ddmt, kkbt, change, tot; //또또면 꽁꽁바 총가격, 거스름돈, 낼돈
	printf("또또면 몇개 사실거?");
	scanf("%d", &ddm);
	printf("꽁꽁바 몇개 사실거?");
	scanf("%d", &kkb);
	ddmt = ddm * ddmp;
	kkbt = kkb * kkbp;

	printf("얼마내실거?");
	scanf("%d", &tot);
	change = tot - ddmt - kkbt;
	printf("또또면 전체 금액 : %d원\n", ddmt);
	printf("꽁꽁바 전체 금액 : %d원\n", kkbt);
	printf("거스름돈 : %d원\n", change);
	a = change / 500;
	change = change % 500;
	b = change / 100;
	change = change % 100;
	c = change / 50;
	change = change % 50;
	d = change / 10;


	
	printf("거스름돈 동전의 최소 개수...\n");
	printf("500원 = %d, 100원 = %d, 50원 = %d, 10원 = %d", a, b, c, d);


	return 0;


	



}