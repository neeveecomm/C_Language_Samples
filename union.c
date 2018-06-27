#include <stdio.h>

struct sta{
	int a;
	char b;
	char x[12];
};

union una {
	int a;
	char b;
	char x[12];
};

int main(int argc, char *argv[])
{
	printf("struct: %lu union: %lu\n", sizeof(struct sta), sizeof(union una));
	return 0;
}
