#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day,  from 00:00 to 23:59
 *
 * Return - void
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours < 24)
	{
		minutes = 0;

		while (minutes < 60)
		{
			printf("%02d:%02d", hours, minutes);
			printf("\n");
			minutes++;
		}
		hours++;
	}
	return;
}
