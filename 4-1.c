#include<stdio.h>
int main() {
	int i, j, n = 15;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= 2 * n - 1; j++)
			if (n - i < j && n + i > j)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}

	return 0;
}