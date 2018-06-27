#include <stdio.h>

int main(int argc, char *argv[])
{
	int marks[2][4], i, j;
	int *ptr;

	for(j = 0; j < 2; j++) {
		for(i = 0; i < 4; i++) {
			printf("Enter the Marks of Student %d:", i);
			scanf("%d", &marks[j][i]);
		}
	}
	ptr = &marks[0][0];

	for(j = 0; j < 2; j++) {
		for(i = 0; i < 4; i++) {
			printf("marks[%d][%d] = %d Ptr based val: %d\n", j, i, marks[j][i], *ptr);
			ptr++;
		}
	}

	return 0;
}
