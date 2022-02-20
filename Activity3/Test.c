#include <stdio.h>
#include "Test.h"

void add(int a, int b);
void sub(int a, int b);
void div(int a, int b);
void mult(int a, int b);

int main(int argc, char** argv)
{
	//Create vars
	int a = DEFAULT_NUMBER;
	int b;


	//Get number via input
	printf("Enter any number: ");
	scanf_s("%d", &b);

	//Output results
	add(a, b);
	sub(a, b);
	div(a, b);
	mult(a, b);


	return 0;
}

void add(int a, int b)
{	
int result = a + b;
printf("\nThe addition result is %d\n", result);
}
void sub(int a, int b)
{
	int result = a - b;
	printf("\nThe subtraction result is %d\n", result);
}
void mult(int a, int b)
{
	int result = a * b;
	printf("\nThe multiplication result is %d\n", result);
}
void div(int a, int b)
{
	if (b == 0) {
		printf("\nDivide by zero error; please try again.\n");
	}
	else {
		int result = a / b;
		printf("\nThe division result is %d\n", result);
	}
	
}