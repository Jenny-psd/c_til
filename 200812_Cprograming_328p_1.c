#include <stdio.h>

long ConvertToBinary(int n);

int main() {
	int num;
	printf("10���� ���� �Է� (0~1023): ");
	scanf("%d", &num);

	printf("2������ ��ȯ: %ld\n", ConvertToBinary(num));
}
long ConvertToBinary(int n) {
	int binary[10];
	for (int i = 9; i >= 0; i++) {
		binary[i] = n % 2;
		n /= 2;
	}
	return (atoi(binary));
}