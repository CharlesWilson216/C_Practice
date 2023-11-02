#include <stdio.h>

// print a histogram of the length of the words in input //

int main()
{
	int i, length, c;
	int wordlength[15];

	length = 0;

	for (i = 0; i < 15; ++i)
		wordlength[i] = 0;

/*	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\n' && c != '\t' && c != '\b') {
			++length;
			length = wordlength[length];
		}
		else
			length = 0;
	}
*/
	c = getchar();
	while (c != EOF)  {
		while (c != ' ' && c != '\n' && c != '\t' && c != '\b' && c != EOF) {
			++length;
			c = getchar();
		}
		++wordlength[length];
		c = getchar();
		printf("wordlength[5] in while loop: %d\n", wordlength[5]);
	}
	printf("wordlength[5] out of while loop: %d\n", wordlength[5]);
	
	for (i = 0; i < 15; ++i) {
		printf("%d letter words: %d\n", i, wordlength[i]);
	}
}

