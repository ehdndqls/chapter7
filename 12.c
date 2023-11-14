#include<stdio.h>
int main() {
	int i, n, a = 0, b = 1, c;
	printf("몇번째 항까지 구할까요? ");
	scanf_s("%d", &n);

	printf("%d, %d",a,b);

	for (i = 1; i < n; i++) {
		c = a + b;
		a = b;
		b = c;
		printf(", %d", c);
	}
	return 0;
}