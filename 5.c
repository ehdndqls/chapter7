#include<stdio.h>
int main() {
	int i, j, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			printf("%d ", j);
		printf("\n");
	}
	return 0;
}