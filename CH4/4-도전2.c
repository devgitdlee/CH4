#include <stdio.h>

int main(void) {
	int w5000, w1000; //����
	int w500, w100, w50, w10; //����
	int a, b, c; //���ǰ�
	int change, tot; //�Ž�����, ���µ�
	
	printf("�� ���� ���ǰ��� �Է��ϼ��� :");
	scanf("%d %d %d", &a, &b, &c);

	printf("�󸶳��ǰ�?");
	scanf("%d", &tot);
	change = tot - a - b - c;
	printf("�Ž����� : %d���Դϴ�.\n", change);
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


	printf("��õ����: %d��\n", w5000);
	printf("õ����: %d��\n", w1000);
	printf("�����¥��: %d��\n", w500);
	printf("���¥��: %d��\n", w100);
	printf("���ʿ�¥��: %d��\n", w50);
	printf("�ʿ�¥��: %d��\n", w10);
	
	return 0;

}