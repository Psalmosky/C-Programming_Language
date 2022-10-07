#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Develop an intermediate calculator that reads:
 *	Any of these character (+, -, *, /, %) from the user
 *	Two numbers from the user
 *	Using switch cases to calculate and print out the results
 */

int main()
{
	int num1, num2;
	char mathOperation;
	printf("Enter your desired mathOperation ('+', '-', '*', '/', '%'): ");
	scanf("%c", &mathOperation);
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);

	switch(mathOperation)
	{
		case '+':
			printf("%d %c %d = %d\n", num1, mathOperation, num2, num1+num2);
			break;
		case '-':
			printf("%d %c %d = %d\n", num1, mathOperation, num2, num1-num2);
			break;
		case '*':
			printf("%d %c %d = %d\n", num1, mathOperation, num2, num1*num2);
			break;
		case '/':
			if (num2 == 0)
				printf("You can't divide by 0\n");
			else
				printf("%d %c %d = %d\n", num1, mathOperation, num2, num1/num2);
			break;
		case '%':
			if (num2 == 0)
				printf("You can't divide by 0\n");
			else
				printf("%d %c %d = %d\n", num1, mathOperation, num2, num1%num2);
			break;
		default:
			printf("ERROR... Try Again!\n");
			break;
	}
	return 0;
}

