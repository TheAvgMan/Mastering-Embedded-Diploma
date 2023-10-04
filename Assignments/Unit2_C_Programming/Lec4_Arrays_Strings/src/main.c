/*
 ============================================================================
 Name        : main.c
 Author      : Hazem Zaki
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void) {

	/* The following are Homework-3 Exercises:  */

	/*======= Arrays =======*/

	/* Ex.1 */
	/*
	{
		float a[2][2], b[2][2], sum[2][2];

		printf("Enter the elements of the 1st matrix\n");

		int row,col;
		for (row=0; row<2; ++row) {
			for (col=0; col<2; ++col) {
				printf("Enter a%d%d: ", row+1, col+1);
				fflush(stdout);
				scanf("%f", &a[row][col]);
			}
		}

		printf("Enter the elements of the 2nd matrix\n");

		for (row=0; row<2; ++row) {
			for (col=0; col<2; ++col) {
				printf("Enter b%d%d: ", row+1, col+1);
				fflush(stdout);
				scanf("%f", &b[row][col]);

				sum[row][col] = a[row][col] + b[row][col];
			}
		}

		printf("Sum of Matrix:\n");

		for (row=0; row<2; ++row) {
			for (col=0; col<2; ++col) {
				printf("%.2f		", sum[row][col]);
			}
			printf("\n");
		}
	}
	 */

	/* Ex.2 */
	/*
	{
		int num;

		printf("Enter the numbers of data: ");
		fflush(stdout);
		scanf("%d", &num);

		float arr[num];

		int i;
		for (i=0; i<num; ++i) {
			printf("%d. Enter number: ", i+1);
			fflush(stdout);
			scanf("%f", &arr[i]);
		}

		float sum=0;
		for (i=0; i<num; ++i) sum += arr[i];

		printf("Average = %.2f", sum/num);

	}
	 */

	/* Ex.3 */
	/*
	{
		int row,col;
		printf("Enter rows and columns of matrix: ");
		fflush(stdout);
		scanf("%d%d", &row, &col);

		float arr[row][col];

		printf("Enter elements of matrix:\n");
		int i,j;
		for (i=0; i<row; ++i)
			for (j=0; j<col; ++j) {
				printf("Enter a%d%d: ", i+1, j+1);
				fflush(stdout);
				scanf("%f", &arr[i][j]);
			}


		printf("\nEntered Matrix:\n");
		for (i=0; i<row; ++i) {
			for (j=0; j<col; ++j) {
				printf("%.1f	", arr[i][j]);
			}
			printf("\n\n");
		}

		printf("\nTranspose of Matrix:\n");
		for (i=0; i<col; ++i) {
			for (j=0; j<row; ++j) {
				printf("%.1f	", arr[j][i]);
			}
			printf("\n\n");
		}

	}
	 */

	/* Ex.4 */
	/*
	{
		int num;
		printf("Enter no. of elements: ");
		fflush(stdout);
		scanf("%d", &num);

		int arr[num];

		printf("\n");
		fflush(stdout);
		int i;
		for (i=0; i<num; ++i) arr[i] = i + 1;
		for (i=0; i<num; ++i) printf("%d ", arr[i]);

		int element;
		printf("\n\nEnter the element to be inserted: ");
		fflush(stdout);
		scanf("%d", &element);

		int position;
		printf("\nEnter the location: ");
		fflush(stdout);
		scanf("%d", &position);
		--position;

		for (i = num-1; i >= position; --i) arr[i+1] = arr[i];
		arr[position] = element;
		++num;

		printf("\n");
		for (i=0; i<num; ++i) printf("%d ", arr[i]);

	}
	 */

	/* Ex.5 */
	/*
	{
		int num;
		printf("Enter no. of elements: ");
		fflush(stdout);
		scanf("%d", &num);

		int arr[num];

		printf("\n");
		fflush(stdout);
		int i;
		for (i=0; i<num; ++i) arr[i] = ((i + 1) * 10) + (i + 1);
		for (i=0; i<num; ++i) printf("%d ", arr[i]);

		int element;
		printf("\n\nEnter the element to be searched: ");
		fflush(stdout);
		scanf("%d", &element);

		int position = -1;
		for (i=0; i<num; ++i)
			if (arr[i] == element) {
				position = i + 1;
				break;
			}

		printf("\n");
		if (position != -1)
			printf("Number found at the location = %d", position);
		else
			printf("Number not found");

	}
	 */

	/*======= Strings =======*/

	/* Ex.1 */
	/*
	{
		char userInput[100];
		printf("Enter a string: ");
		fflush(stdout);
		gets(userInput);

		char char_element;
		printf("\nEnter a character to find frequency: ");
		fflush(stdout);
		scanf("%c", &char_element);

		int i, counter = 0;
		int str_len = strlen(userInput);
		for (i = 0; i < str_len; ++i)
			if (userInput[i] == char_element)
				++counter;

		printf("\nFrequency of %c = %d", char_element, counter);

	}
	 */

	/* Ex.2 */
	/*
	{
		char userInput[100];
		printf("Enter a string: ");
		fflush(stdout);
		gets(userInput);

		int i, counter = 0;
		int str_len = strlen(userInput);
		for (i = 0; i < str_len; ++i)
			++counter;

		printf("\nLength of string: %d", counter);

	}
	 */

	/* Ex.3 */
	/*
	{
		char userInput[100], rev_str[100];
		printf("Enter a string: ");
		fflush(stdout);
		gets(userInput);

		int i,j;
		int str_len = strlen(userInput);
		for (i = str_len - 1 , j = 0; i >= 0; --i , ++j)
			rev_str[j] = userInput[i];
		rev_str[j] = '\0';

		printf("Reverse of string is: %s", rev_str);

	}
	*/


	return 0;
}
