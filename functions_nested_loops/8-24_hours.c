/**
 * jack_bauer - prints every minute of the day,  from 00:00 to 23:59
 *
 * Return - void
 */

void jack_bauer(void)
{
	int secondsInDay = 24 * 60 * 60;
	int secondsInHour = 60 * 60;
	int secondsInMinutes = 60;
	int count = 0;

	while (count < secondsInDay)
	{
		int seconds = count;
		int hours;
		int minutes;

		hours = seconds / secondsInHour;
		seconds = seconds % secondsInHour;
		minutes = seconds / secondsInMinutes;
		seconds = seconds % secondsInMinutes;

		printf("%02d:%02d:%02d", hours, minutes, seconds);
		printf("\n");
		count++;
	}
	return;
}
