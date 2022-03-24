#include <stdio.h>
#define TABLENGTH 8	/* length of a tab */

int main()
{
	int lineCount = 0, spaceLength = 0, c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			spaceLength = (TABLENGTH - (lineCount % TABLENGTH));
			while (spaceLength > 0) {
				putchar(' ');
				lineCount++;
				spaceLength--;
			}
		}

		else
			putchar(c);
	}
	return 0;
}