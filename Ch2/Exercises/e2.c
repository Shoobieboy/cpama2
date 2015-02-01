/* Consider the following program:
 * (a) Identify the directives and statements in this program
 * (b) What output does the program produce?
 */
#include <stdio.h>

int main(void)
{
	printf("Parkinson's Law:\nWork expands as to ");
	printf("fill the time\n");
	printf("available for its completion.\n");
	return 0;
}

/* Answer:
 * (a) Directives:
 * 	#include <stdio.h>
 * Statements:
 * 	printf("Parkinson's Law:\nWork expands as to ");
 * 	printf("fill the time\n");
 * 	printf("available for its completion.\n");
 * 	return 0;
 *
 * (b) Output (minus brackets):
 * {Parkinson's Law:
 * Work expands as to fill the time
 * available for its completion.
 * }
 */