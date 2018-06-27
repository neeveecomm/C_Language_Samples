#include <stdio.h>

int main(int argc, char *argv[])
{
	char name[64];
	int i;

	
	printf("Enter the name:");
	scanf("%s", name);
	printf("Name: %s\n", name);

	for(i = 0; i < 10; i++) {
		printf("%c -- %d\n", name[i], name[i]);
	}

	return 0;
}
