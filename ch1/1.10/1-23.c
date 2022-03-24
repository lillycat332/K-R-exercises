#include <stdio.h>
#include <stdbool.h>
/* Strip Comments from C source code */

int main()
{
	int c;
	bool inComment = false;
	char lastChar;

	while ((c = getchar()) != EOF) {
		if (c == '/' && lastChar != '*')
			inComment = true;

		if ((c == '*') && (lastChar = '/'))
			inComment = true;

		if (!inComment)
			putchar(c);

		if ((c == '/') && (lastChar == '*'))
			inComment = false;

		lastChar = c;
	}
}