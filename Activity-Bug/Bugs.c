
#include <stdio.h>

int main(void)
{
	int p, d;
	_Bool isPrime;

	for (p = 2; p <= 50; ++p)
	{
		isPrime = 1;

		for (d = 2; d < p; ++d)
		{
			if (p % d == 0) {
				isPrime = 0;
			}
				
		}
		if (isPrime != 0) {
			printf("%i ", p);
		}
	}
	printf("\n");
	return 0;
}


/*
1. Line 9 - x is undefined, and even if it was defined, it's unrelated to the loop. Should be a p.
2. Line 15 - if statement must use expressional value to compare
3. Line 15 - if statement requires brackets to break 
4. Line 20 - if statement requires brackets to break
5 Maybe?. Requires 'stdbool.h' header file to use _Bool

Apologies, I'm having trouble finding any further errors. The code works correctly and accomplishes it's function.
*/