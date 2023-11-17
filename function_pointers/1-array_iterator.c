#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 *  on each element of an array
 * @array: array with values to be passed as arguments to the given function
 * @size: size of the array
 * @action: pointer to the function to be executed with each array member
 * Return: void
 */
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
