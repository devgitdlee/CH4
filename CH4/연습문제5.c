#include <stdio.h>

int main(void) {
	int a, b, c, d; //����
	int ddm, kkb; //�ǶǸ� �ǲǹ�
	int ddmp = 70, kkbp = 30; //�ǶǸ� �ǲǹ� ���� ����
	int ddmt, kkbt, change, tot; //�ǶǸ� �ǲǹ� �Ѱ���, �Ž�����, ����
	printf("�ǶǸ� � ��ǰ�?");
	scanf("%d", &ddm);
	printf("�ǲǹ� � ��ǰ�?");
	scanf("%d", &kkb);
	ddmt = ddm * ddmp;
	kkbt = kkb * kkbp;

	printf("�󸶳��ǰ�?");
	scanf("%d", &tot);
	change = tot - ddmt - kkbt;
	printf("�ǶǸ� ��ü �ݾ� : %d��\n", ddmt);
	printf("�ǲǹ� ��ü �ݾ� : %d��\n", kkbt);
	printf("�Ž����� : %d��\n", change);
	a = change / 500;
	change = change % 500;
	b = change / 100;
	change = change % 100;
	c = change / 50;
	change = change % 50;
	d = change / 10;


	
	printf("�Ž����� ������ �ּ� ����...\n");
	printf("500�� = %d, 100�� = %d, 50�� = %d, 10�� = %d", a, b, c, d);


	return 0;


	



}