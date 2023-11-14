#include<stdio.h>
int main() {
	int i=0, n, result=0;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	do {
		result *= 10;
		result += n % 10;
		n /= 10;
	} while (n != 0);

	printf("%d", result);

	return 0;
}