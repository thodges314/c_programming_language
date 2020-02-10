#include <stdio.h>

// floating point version
int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;	 // lower limit of temperature scale
	upper = 300; // upper limit of temperature scale
	step = 20;	 // step size

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5.0 / 9.0 * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius); // %3.0f <- 3 chars, 0 decimals, %6.1f <- 6 chars, 1 decimal
		fahr += step;
	}
}