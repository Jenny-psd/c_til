#include <stdio.h>
#include <stdlib.h>
#define SIZEOFARR 7

void DescendBubble(int* arr, int len);

int main() {
	int* numarr = malloc(sizeof(int) * SIZEOFARR);
	printf("7���� ���� �Է�\n");
	for (int i = 0; i < SIZEOFARR; i++) {
		printf("�Է�%d: ", i + 1);
		scanf("%d", numarr + i);
	}
	DescendBubble(numarr, SIZEOFARR);

	for (int i = 0; i < SIZEOFARR; i++)
		printf("%d ", numarr[i]);
}
void DescendBubble(int* arr, int len) {
	int temp;

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}