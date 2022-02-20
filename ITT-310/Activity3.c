*
Name: Christopher Ferrari
Date: 01/22/2022
Class: ITT-310
Assignment: Activity 3 Part 2
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv)
{
	// Print Data Types
	printf("CHAR_BIT	: %d\n", CHAR_BIT);
	printf("CHAR_MAX	: %d\n", CHAR_MAX);
	printf("CHAR_MIN	: %d\n", CHAR_MIN);
	printf("INT_MAX	: %d\n", INT_MAX);
	printf("INT_MIN	: %d\n", INT_MIN);
	printf("LONG_MAX	: %ld\n", LONG_MAX);
	printf("LONG_MIN	: %ld\n", LONG_MIN);
	printf("SCHAR_MAX	: %d\n", SCHAR_MAX);
	printf("SHRT_MIN	: %d\n", SHRT_MIN);
	printf("SHRT_MAX	: %d\n", SHRT_MAX);
	printf("UCHAR_MAX	: %d\n", UCHAR_MAX);
	printf("UINT_MAX	: %u\n", (unsigned int)UINT_MAX);
	printf("ULONG_MAX	: %lu\n", (unsigned long)ULONG_MAX);
	printf("USHRT_MAX	: %d\n", (unsigned short)USHRT_MAX);

	// Variables and initialization
	int a, b;
	int c;
	float f;
	a = 10;
	b = 20;
	c = a + b;

	// Print results
	printf("value of c : %d \n", c);
	f = (float)70.0 / (float)3.0;
	printf("value of f : %f \n", f);

	return 0;
}
