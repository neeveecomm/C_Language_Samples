#include <stdio.h>

int main(int argc, char *argv[])
{
	int marks[10], i;
	int *ptr;

	for(i = 0; i < 10; i++) {
		printf("Enter the Marks of Student %d:", i);
		scanf("%d", &marks[i]);
	}

	ptr = &marks[0];

	for(i = 0; i < 10; i++) {
		printf("marks[%d] = %d Ptr based val: %d\n", i, marks[i], *ptr);
		ptr++;
	}

	return 0;
}
