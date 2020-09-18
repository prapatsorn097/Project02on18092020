#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, j;
	for (i = 0; i <= 7; i++) {
		for (j = 0; j <= 7; j++) {
			if (j == 0 || j == 6 || ((i == j) && (j > 1 && j < 4)) || (i == 1 && j == 5) || (i == 2 && j == 4))
				printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	return 0;
}