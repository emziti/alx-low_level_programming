#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{


	int number;

	for (number = 48; number <= 57; number++)
	{
	 	putchar(number);

		if (number == 57)

		{

			break;
		}

		putchar(',');
		putchar (' ');

	}

	putchar('\n');

	return (0);


