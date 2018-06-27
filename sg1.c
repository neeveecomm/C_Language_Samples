#include <stdio.h>

static int sglobal = 30;

int func(void)
{
	printf("%d\n", sglobal);
}
