#include <stdio.h>
#define COL 80
/* Strip Comments from C source code */

int main()
{
	int c, count;

	while ((c = getchar()) != EOF) {
		count++;
		if ((c == ' ' || c == '\t') && count >= COL)
			putchar('\n');
		else
			putchar(c);
	}
	return 0;
}