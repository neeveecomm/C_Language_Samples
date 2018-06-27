#include <stdio.h>

int main(int argc, char *argv[])
{
	int marks[10];
	int i;
	int j,k;
	int small, big;

	for(i = 0; i < 10; i++) {
		printf("Enter the Marks of Student %d:", i);
		scanf("%d", &marks[i]);
	}

	for(j = 0; j < 10; j++) {
		if(j == 0) {
			small = big = marks[j];
		}

		if(small > marks[j]) {
			small = marks[j];
		}

		if(big < marks[j]) {
			big = marks[j];
		}		
	}
	
	printf("Small: %d big: %d\n", small, big);

	for(k = 0; k < 10; k++) {
	for(j = 1; j < 10; j++) {
		int tmp;

		if(marks[j-1] > marks[j]) {
			tmp = marks[j];
			marks[j] = marks[j-1];
			marks[j-1] = tmp;			
		}
	}
	}

	for(i = 0; i < 10; i++) {
		printf("Marks : %d -- %d\n", i, marks[i]);
	}

	return 0;
}
