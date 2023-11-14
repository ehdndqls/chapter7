#include<stdio.h>
int main() {
	int n=1, sum = 0;
	while (1) {
		sum += n;

		if (sum >= 10000) {
			sum -= n;
			break;
		}

		n++;
	}
	printf("1부터 %d까지의 합이 %d 입니다.",n-1, sum);

	return 0;
}