#include <stdio.h>

#define IN	1 /* in a word */
#define OUT	0 /* out of a word */

/* print input one word per line */

int main()
{
	int c;

	c = getchar();
	while (c != EOF) {
		if (c != ' ' && c != '\n' && c != '\t' && c != '\b') {
			putchar(c);
		}
		else
			printf("\n");
		c = getchar();
	}
}


