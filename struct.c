#include <stdio.h>

struct student {
	char name[64];
	int std;
	int sec;
	int marks;
};

int main(int argc, char *argv[])
{
	struct student stud[2];
	int i;

	for(i=0; i < 2; i++) {
	printf("Enter the name:");
	scanf("%s", stud[i].name);

	printf("Enter the standard:");
	scanf("%d", &stud[i].std);

	printf("Enter the section:");
	scanf("%d", &stud[i].sec);

	printf("Enter the marks:");
	scanf("%d", &stud[i].marks);
	}

	for(i = 0; i < 2; i++) {
	printf("%s-->%d-->%d->%d\n", stud[i].name, stud[i].std, stud[i].sec, stud[i].marks);
	}

	return 0;
}
