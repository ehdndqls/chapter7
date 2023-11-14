#include<stdio.h>
int main() {
	int i, n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("약수: ");
	for (i = 1; i <= n; i++) 
		if (n % i == 0)
			printf("%d ", i);

	return 0;
}