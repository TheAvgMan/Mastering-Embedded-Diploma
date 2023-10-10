/*
 ============================================================================
 Name        : main.c
 Author      : Hazem Zaki
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

void primeNumbersBetween(int num1, int num2);
int factorial(int num);

void rev_sentence(char sentence[], short last_char);
char* rev_sentence_ptr;

int powerNumber(int base, int power);


int main(void) {

	/* The following are Homework-4 Exercises:  */

	/*======= Functions =======*/

	/* Ex.1 */
	/*
	{
		int num1, num2;
		printf("Enter two numbers (interval): ");
		fflush(stdout);
		scanf("%d%d", &num1, &num2);

		primeNumbersBetween(num1, num2);
	}
	 */

	/* Ex.2 */
	/*
	{
		int num;
		printf("Enter a positive integer: ");
		fflush(stdout);
		scanf("%d", &num);

		printf("Factorial of %d = %d", num, factorial(num));
	}
	 */

	/* Ex.3 */
	/*
	{
		char sentence[100];

		printf("Enter a sentence: ");
		fflush(stdout);
		gets(sentence);

		rev_sentence(sentence, strlen(sentence) - 1);

		printf("%s", rev_sentence_ptr);

	}
	 */

	/* Ex.4 */
	/*
	{
		int base, power;
		printf("Enter base integer: ");
		fflush(stdout);
		scanf("%d", &base);

		printf("Enter power (positive) integer: ");
		fflush(stdout);
		scanf("%d", &power);

		printf("%d^%d = %d", base, power, powerNumber(base, power));

	}
	*/


	return 0;
}


void primeNumbersBetween(int num1, int num2) {
	int i,j, arr[100];
	unsigned char isPrime, arrCounter = 0;

	for (i = num1; i <= num2; ++i) {
		isPrime = 1;
		for (j = 2; j < i; ++j)
			if (i % j == 0) {
				isPrime = 0;
				break;
			}

		if (isPrime) arr[arrCounter++] = i;
	}

	printf("Prime numbers between %d and %d are: ", num1, num2);
	for (i = 0; i < arrCounter; ++i) printf("%d ", arr[i]);

}

int factorial(int num) {
	if (num == 1) return 1;
	else return num * factorial(num - 1);
}

void rev_sentence(char sentence[], short last_char) {
	static char rev_sentence_arr[100];
	static short char_index = 0;

	rev_sentence_arr[char_index++] = sentence[last_char--];

	if(last_char == -1){
		rev_sentence_arr[char_index] = '\0';
		return;
	}
	else rev_sentence(sentence, last_char);

	rev_sentence_ptr = rev_sentence_arr;
}

int powerNumber(int base, int power) {
	if (!power) return 1;
	else return base * powerNumber(base, power - 1);
}
