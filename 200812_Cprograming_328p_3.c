#include <stdio.h>
#include <stdlib.h>
#define SIZEOFARR 10

int main() {
	int* inputArr = malloc(sizeof(int) * SIZEOFARR);
	int inputnum = 0;
	int front = 0, back = SIZEOFARR - 1;

	printf("�� 10���� ���� �Է�\n");
	for (int i = 0; i < SIZEOFARR; i++) {
		printf("�Է�%d: ", i + 1);
		scanf("%d", &inputnum);
		if (inputnum % 2 == 0) {
			*(inputArr + back) = inputnum;
			back--;
		}
		else if (inputnum % 2 != 0) {
			*(inputArr + front) = inputnum;
			front++;
		}
	}
	printf("�迭 ��� ���: ");
	for (int i = 0; i < SIZEOFARR; i++)
		printf("%d ", *(inputArr + i));
	printf("\n"); 
	free(inputArr);
	return 0;
}