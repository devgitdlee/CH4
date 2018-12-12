#include <stdio.h>

int main(void) {
	int w5000, w1000; //지폐
	int w500, w100, w50, w10; //동전
	int a, b, c; //물건값
	int change, tot; //거스름돈, 내는돈
	
	printf("세 개의 물건값을 입력하세요 :");
	scanf("%d %d %d", &a, &b, &c);

	printf("얼마내실거?");
	scanf("%d", &tot);
	change = tot - a - b - c;
	printf("거스름돈 : %d원입니다.\n", change);
	w5000 = change / 5000;
	change = change % 5000;
	w1000 = change / 1000;
	change = change % 1000;
	w500 = change / 500;
	change = change % 500;
	w100 = change / 100;
	change = change % 100;
	w50 = change / 50;
	change = change % 50;
	w10 = change / 10;


	printf("오천원권: %d장\n", w5000);
	printf("천원권: %d장\n", w1000);
	printf("오백원짜리: %d개\n", w500);
	printf("백원짜리: %d개\n", w100);
	printf("오십원짜리: %d개\n", w50);
	printf("십원짜리: %d개\n", w10);
	
	return 0;

}