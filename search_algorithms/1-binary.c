#include "search_algos.h"

/**
 * search_helper: helper function that does actual binary search
 * @array: pointer to the array in which to search for a value
 * @left: left most index of the array
 * @right: right most index of the array
 * @value: value to search for in the array
 * return: index at which the value is found or -1 if not found
 */
int search_helper(int *array, int left, int right, int value)
{
	int mid, i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i > left)
			printf(", ");

		printf("%d", array[i]);
	}
	puts("");

	if (right == left && array[left] == value)
		return (left);

	if (right > left)
	{
		mid = (right + left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			return (search_helper(array, left, mid - 1, value));

		if (array[mid] < value)
			return (search_helper(array, mid + 1, right, value));
	}
	return -1;
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 * else -1 if value is not present in array or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (search_helper(array, 0, size - 1, value));
}
