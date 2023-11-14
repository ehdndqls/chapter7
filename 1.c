#include<stdio.h>
int main() {
	int i, n;

	printf("카운터의 초기값을 입력하시오: ");
	scanf_s("%d", &n);

	for (i = n; i > 0; i--) {
		printf("%d ", i);
	}
	printf("\a");

	return 0;
}