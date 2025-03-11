#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n");

	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n");
	}

	else
	{
		printf("Last digit of %d is %d and is less than 6 and 0\n");
	}

	return (0);
}
