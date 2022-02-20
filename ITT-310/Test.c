#include <stdio.h>
#include "Test.h"

#include <stdio.h>

int max();
void loop1(int max);
void loop2(int max);
void loop3(int max);
int main() {

	loop1(MAX_NUMBER);
	loop2(MAX_NUMBER);
	loop3(MAX_NUMBER);
	
	
	/*
	

	
	*/
	return 0;
}
void loop1(int max)
{
	printf("Loop 1\n");
	for (int a = 0; a <= max; ++a)
	{
		if (a % 2 == 0)
			printf("%d\n", a);
	}
	return 0;
}
void loop2(int max)
{
	printf("Loop 2\n");
	int b = 0;
	while (b <= max)
	{
		if (b % 2 != 0)
			printf("%d\n", b);
		++b;
	}
	return 0;
}
void loop3(int max)
{
	printf("Loop 3\n");
	int c = 0;
	do
	{
		if (c % 3 == 0)
			printf("%d\n", c);
		++c;
	} while (c <= max);
	return 0;
}
int max()
{
	return MAX_NUMBER;
}
