#include<stdio.h>
int main() {
	int i, sum = 0;
	
	for (i = 0; i <= 100; i += 3)
		sum += i;

	printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.", sum);
	
	return 0;
}