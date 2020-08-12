#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZEOFARR 20

void TellPalindrome(char* arr, int n);

int main() {
	char* charArr = malloc(sizeof(char) * SIZEOFARR);

	printf("���ڿ� �Է�: ");
	scanf("%s", charArr);

	TellPalindrome(charArr, (int)strlen(charArr));
	free(charArr);
	return 0;
}
void TellPalindrome(char* arr, int n) {
	int front = 0, back = n - 1;

	for (int i = 1; i < n / 2; i++) {
		if (arr[front] != arr[back]) {
			printf("ȸ���� �ƴմϴ�.\n");
			return;
		}
		front++; back--;
	}
	printf("ȸ���Դϴ�.\n");
	return;
}