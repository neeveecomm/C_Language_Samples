#include <stdio.h>

int main(int argc, char * argv[])
{
	int a;
	char b;
	short c;
	long d;
	unsigned int e;
	unsigned char f;
	unsigned short g;
	unsigned long h;
	float i;
	double j;
	long double k;

	printf("Enter the float:");
	scanf("%f", &i);
	printf("float: %f\n", i);

	printf("Enter the double:");
	scanf("%lf", &j);
	printf("double: %lf\n", j);

	printf("Enter the long double:");
	scanf("%Lf", &k);
	printf("double: %Lf\n", k);


	return 0;
}
