#include<stdio.h>
int main() {
	int i, n, sum=0;

	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		sum += (i * i);
	}
	printf("��갪�� %d�Դϴ�.", sum);
	return 0;
}