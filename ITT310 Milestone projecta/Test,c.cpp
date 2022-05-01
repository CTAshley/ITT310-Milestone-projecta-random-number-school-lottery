#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
	int lower = 1, upper = 9, count = 5;

	srand (time(0));

	printf(" Welcome Lopes School Distict ");
		printf("Random Lottery for applicants");
		for (int i = 0; i < count; i++) {
			int num = (rand() % (upper - lower + 1)) + lower;
			printf("%d ", num);
		}

		return 0;

}