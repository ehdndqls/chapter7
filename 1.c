#include<stdio.h>
int main() {
	int i, n;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (i = n; i > 0; i--) {
		printf("%d ", i);
	}
	printf("\a");

	return 0;
}