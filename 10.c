#include<stdio.h>
int main() {
	int n, i;
	double r, result = 1;

	printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
	scanf_s("%lf", &r);
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		result *= r;
	}
	printf("������� %lf", result);

	return 0;
}