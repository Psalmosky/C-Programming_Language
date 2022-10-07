#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Find the max and min number between 3 integers
 */

int main()
{
	int a, b, c;
	int max, min;

	printf("Enter the first number: ");
	scanf("%d", &a);

	printf("Enter the second number: ");
	scanf("%d", &b);

	printf("Enter the third number: ");
	scanf("%d", &c);

	max = a;
	min = b;

	if (a < b)
	{
		max = b;
		min = a;
	}
	
	if (b < c)
	{
		max = c;
	}

	if (c < b)
		min = c;

	printf("The Maximum number between the 3 numbers = %d \n", max);
	printf("The Minimum number between the 3 numbers = %d \n", min);

	return 0;
}
