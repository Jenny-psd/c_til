#include <stdio.h>
#include <stdlib.h>
#define SIZEOFARR 10

int main() {
	int* inputArr = malloc(sizeof(int) * SIZEOFARR);
	int inputnum = 0;
	int front = 0, back = SIZEOFARR - 1;

	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < SIZEOFARR; i++) {
		printf("입력%d: ", i + 1);
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
	printf("배열 요소 출력: ");
	for (int i = 0; i < SIZEOFARR; i++)
		printf("%d ", *(inputArr + i));
	printf("\n"); 
	free(inputArr);
	return 0;
}