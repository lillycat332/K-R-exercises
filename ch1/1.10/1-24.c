#include <stdio.h>

int main()
{
	int parenCount = 0, braceCount = 0, bracketCount = 0, c;

	while ((c = getchar()) !=EOF) {
		if (c == '(')
			parenCount++;

		else if (c == ')')
			parenCount--;

		else if (c == '[')
			bracketCount++;

		else if (c == ']')
			bracketCount--;

		else if (c == '{')
			braceCount++;

		else if (c == '}')
			braceCount--;
	}

	if (parenCount > 0)
		printf("\nError: unclosed (parentheses)\n");

	if (bracketCount > 0)
		printf("\nError: unclosed [brackets]\n");

	if (braceCount > 0)
		printf("\nError: unclosed {braces}\n");

	if (parenCount < 0)
		printf("\nError: extraneous closing (parentheses)\n");

	if (bracketCount < 0)
		printf("\nError: extraneous closing [brackets]\n");

	if (braceCount < 0)
		printf("\nError: extraneous closing {braces}\n");

	else
		printf("\nNo errors found\n");
	return 0;
}