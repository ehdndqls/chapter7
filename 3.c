#include<stdio.h>
int main() {
	int i, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("���: ");
	for (i = 1; i <= n; i++) 
		if (n % i == 0)
			printf("%d ", i);

	return 0;
}