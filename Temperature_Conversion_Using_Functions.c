#include <stdio.h>

int temp(int f);

int main()
{
	int f;

	for (f = 0; f <= 300; f = f + 20) {
		printf("%d degrees farenheit equals %d degrees celsius\n", f, temp(f));
	}
	return 0;
}

int temp(int f)
{
	int i, c;

	while (f <= 300) {
		c = 5 * (f - 32) / 9;
		return c;
	}
}
