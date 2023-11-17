#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count = 0;

	if (!array || !action)
		return;

	while (count < size)
	{
		action(array[count]);
		count++;
	}
}
