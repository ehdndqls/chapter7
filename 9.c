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
	printf("1���� %d������ ���� %d �Դϴ�.",n-1, sum);

	return 0;
}