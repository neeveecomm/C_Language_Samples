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
	struct student *ptr;
	int i;

	ptr = &stud[0];

	for(i=0; i < 2; i++, ++ptr) {
	printf("Enter the name:");
	scanf("%s", ptr->name);

	printf("Enter the standard:");
	scanf("%d", &ptr->std);

	printf("Enter the section:");
	scanf("%d", &ptr->sec);

	printf("Enter the marks:");
	scanf("%d", &ptr->marks);
	}

	ptr = &stud[0];

	for(i = 0; i < 2; i++, ++ptr) {
	printf("%s-->%d-->%d->%d\n", ptr->name, ptr->std, ptr->sec, ptr->marks);
	}

	return 0;
}
