/*
 ============================================================================
 Name        : main.c
 Author      : Hazem Zaki
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	/* The following are Homework-1 Exercises:  */

		/* Ex.1 */
	/*
	{
		printf("C Programming");
	}
	*/

		/* Ex.2 */
	/*
	{
		int userInput;

		printf("Enter an integer: ");
		fflush(stdout);
		scanf("%d", &userInput);

		printf("You entered: %d", userInput);
	}
	*/

		/* Ex.3 */
	/*
	{
		int num1, num2;

		printf("Enter two integers: ");
		fflush(stdout);
		scanf("%d", &num1);
		scanf("%d", &num2);

		printf("Sum: %d", num1 + num2);
	}
	*/

		/* Ex.4 */
	/*
	{
		float num1, num2;

		printf("Enter two numbers: ");
		fflush(stdout);
		scanf("%f", &num1);
		scanf("%f", &num2);

		printf("Product: %f", num1 * num2);
	}
	*/

		/* Ex.5 */
	/*
	{
		char userInput;

		printf("Enter a character: ");
		fflush(stdout);
		scanf("%c", &userInput);

		printf("ASCII value of %c = %d", userInput, userInput);
	}
	*/

		/* Ex.6 */
	/*
	{
		float a, b;

		printf("Enter value of a: ");
		fflush(stdout);
		scanf("%f", &a);
		printf("Enter value of b: ");
		fflush(stdout);
		scanf("%f", &b);

		float temp = a;
		a = b;
		b = temp;

		printf("\nAfter swapping, value of a = %f", a);
		printf("\nAfter swapping, value of b = %f", b);
	}
	*/

		/* Ex.7 */
	/*
	{
		int a, b;

		printf("Enter value of a: ");
		fflush(stdout);
		scanf("%d", &a);
		printf("Enter value of b: ");
		fflush(stdout);
		scanf("%d", &b);

		a = a * b;
		b = a / b;
		a = a / b;

		printf("\nAfter swapping, value of a = %d", a);
		printf("\nAfter swapping, value of b = %d", b);
	}
	*/


	/*========================================================================*/


	/* The following are Homework-2 Exercises:  */

		/* Ex.1 */
	/*
	{
		int userInput;

		printf("Enter an integer you want to check: ");
		fflush(stdout);
		scanf("%d", &userInput);

		if (userInput % 2 == 0) printf("%d is even.", userInput);
		else printf("%d is odd.", userInput);
	}
	*/

		/* Ex.2 */
	/*
	{
		char userInput;

		printf("Enter an alphabet: ");
		fflush(stdout);
		scanf("%c", &userInput);

		switch (userInput) {
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("%c is a vowel.", userInput);
			break;

		default:
			printf("%c is a consonant.", userInput);

		}
	}
	*/

		/* Ex.3 */
	/*
	{
		float num1, num2, num3;

		printf("Enter three numbers: ");
		fflush(stdout);
		scanf("%f", &num1);
		scanf("%f", &num2);
		scanf("%f", &num3);

		if (num1 >= num2 && num1 >= num3) printf("Largest number = %f", num1);
		else if (num2 >= num1 && num2 >= num3) printf("Largest number = %f", num2);
		else printf("Largest number = %f", num3);
	}
	*/

		/* Ex.4 */
	/*
	{
		float num;

		printf("Enter a number: ");
		fflush(stdout);
		scanf("%f", &num);

		if (num > 0) printf("%f is positive.", num);
		else if (!num) printf("You entered zero.");
		else printf("%f is negative.", num);
	}
	*/

		/* Ex.5 */
	/*
	{
		char userInput;

		printf("Enter a character: ");
		fflush(stdout);
		scanf("%c", &userInput);

		if ((userInput >= 'a' && userInput <= 'z') || (userInput >= 'A' && userInput <= 'Z'))
			printf("%c is an alphabet.", userInput);
		else printf("%c is not an alphabet.", userInput);
	}
	*/

		/* Ex.6 */
	/*
	{
		int num;

		printf("Enter an integer: ");
		fflush(stdout);
		scanf("%d", &num);

		int i, sum = 0;
		for (i=1; i <= num; ++i) sum += i;

		printf("Sum = %d", sum);
	}
	*/

		/* Ex.7 */
	/*
	{
		int num;

		printf("Enter an integer: ");
		fflush(stdout);
		scanf("%d", &num);

		if (!num) printf("Factorial = 1");
		else if (num < 0)
			printf("Error!!! Factorial of negative number doesn't exist.");
		else {
			int i, factorial_result = num;
			for (i = num - 1; i > 0; --i) factorial_result *= i;

			printf("Factorial = %d", factorial_result);
		}
	}
	*/

		/* Ex.8 */
	/*
	{
		char operator;
		float num1, num2;

		printf("Enter operator either + or - or * or / : ");
		fflush(stdout);
		scanf("%c", &operator);

		printf("Enter two operands: ");
		fflush(stdout);
		scanf("%f", &num1);
		scanf("%f", &num2);

		switch (operator) {
		case '+':
			printf("%f %c %f = %f", num1, operator, num2, num1 + num2);
			break;
		case '-':
			printf("%f %c %f = %f", num1, operator, num2, num1 - num2);
			break;
		case '*':
			printf("%f %c %f = %f", num1, operator, num2, num1 * num2);
			break;
		case '/':
			printf("%f %c %f = %f", num1, operator, num2, num1 / num2);
			break;

		default:
			printf("%c is an invalid operator.");
		}
	}
	*/


	return 0;
}
