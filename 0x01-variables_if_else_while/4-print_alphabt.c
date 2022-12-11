#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * return 0
*/
int main(void)
{
	char low;
	char e='e';
	char q='q';

	for (low='a'; low<='z'; low++)
	{
	if (low !=e &&low !=q)
		putchar(low);
	}
	putchar('\n');
	return (0);
}

