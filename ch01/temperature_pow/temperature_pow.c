#include <stdio.h>

int convert(int m);

int main() // rewritten for 1.15
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;   // lower limit of temperature scale
	upper = 300; // upper limit of temperature scale
	step = 20;   // step size

	fahr = lower;
	while (fahr <= upper)
	{
		printf("%d\t%d\n", fahr, convert(fahr));
		fahr += step;
	}
}

int convert(int fahr)
{
	return 5 * (fahr - 32) / 9;
}