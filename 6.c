#include<stdio.h>
int main() {
	char op;
	int x, y;

	printf("*****************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quit\n");
	printf("*****************\n");

	while (1) {
		do {
			printf("������ �����ϼ���: ");
			scanf_s(" %c", &op, 1);
		} while (op != 'A' && op != 'S' && op != 'M' && op != 'D' && op != 'Q');
		if (op == 'Q')
			break;
		printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
		scanf_s("%d %d", &x, &y);
		if (op == 'A')
			printf("%d\n", x + y);
		else if (op == 'S')
			printf("%d\n", x - y);
		else if (op == 'M')
			printf("%d\n", x * y);
		else if (op == 'D')
			printf("%d\n", x / y);
	}
	return 0;
}