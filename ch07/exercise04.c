// C Primer Plus
// Chapter 7 Exercise 4

// Using if else statements, write a program that reads input up to #, replaces
// each period with an exclamation mark, replaces each exclamation mark
// initially present with two exclamation marks, and reports at the end the
// number of substitutions it has made.

#include <stdio.h>

#define STOP '#'

int main(void)
{
	char ch;
	int substitutions;
	
	printf("Enter input (%c to exit):\n", STOP);
	while ((ch = getchar()) != STOP)
	{
		if (ch == '.'){
			printf("!");
			substitutions++;
		}else if (ch == '!'){
			printf("!!");
			substitutions++;
		}else
			printf("%c", ch);
	}
	printf("%d substitutions made\n", substitutions);
	return 0;
}
