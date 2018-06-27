#include <stdio.h>

extern int global;

int func(void) 
{
	printf("%d\n", global);
	global += 30;
	printf("%d\n", global);
}
