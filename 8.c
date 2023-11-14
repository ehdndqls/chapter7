#include<stdio.h>
int main() {
	int height, i;

	while (1) {
		printf("막대의 높이(종료: -1): ");
		scanf_s("%d", &height);

		if (height == -1)
			break;

		for (i = 0; i < height; i++)
			printf("*");

		printf("\n");
	}
	return 0;
}