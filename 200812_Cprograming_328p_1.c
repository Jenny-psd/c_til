#include <stdio.h>

long ConvertToBinary(int n);

int main() {
	int num;
	printf("10진수 정수 입력 (0~1023): ");
	scanf("%d", &num);

	printf("2진수로 변환: %ld\n", ConvertToBinary(num));
}
long ConvertToBinary(int n) {
	int binary[10];
	for (int i = 9; i >= 0; i++) {
		binary[i] = n % 2;
		n /= 2;
	}
	return (atoi(binary));
}