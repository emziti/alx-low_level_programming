#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)

{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

{
	if (alphabet == 'q')
		continue;


	else if (alphabet == 'e')
		continue;


	putchar (alphabet);

}

putchar ('\n');

return (0);
}

