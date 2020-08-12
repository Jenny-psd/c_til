#include <stdio.h>

void ConvertToBinary(int n);

int main() {
	int num;
	printf("10진수 정수 입력 (0~1023): ");
	scanf("%d", &num);

	ConvertToBinary(num);
	return 0;
}
void ConvertToBinary(int n) {
	int binary[10];
	int i = 0;
		do {
			binary[i] = n % 2;
			i++;
			n /= 2;
		} while (n != 0);
		for (int j = i - 1; j >= 0; j--)
			printf("%d", binary[j]);
		printf("\n");
		return;
}