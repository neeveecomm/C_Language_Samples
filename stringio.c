#include <stdio.h>

int main(int argc, char *argv[])
{
	char str[64];
	int i, mark;
	//printf("enter the string:");
	//scanf("%s", str);

	printf("Enter the marks:");
	scanf("%d", &i);

	sprintf(str, "student marks:  %d\n", i);

	printf("%s", str);

	sscanf(argv[1], "Mark:%d", &mark);

	printf("Mark: %d\n", mark);
	return 0;
}
