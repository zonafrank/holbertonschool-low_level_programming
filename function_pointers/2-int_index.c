/**
 * int_index - searches for an integer in an array,
 * @array: array in which the integer will be searched for
 * @size: size of the array
 * @cmp: pointer to the function that will compare each array
 * value with the integer being searched for
 * Return: index of the first occurence of the integer
 * in the array or -1 if the integer is not found in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int result = -1;
	int index;
	int check = 0;

	if (!array || !cmp)
		return (result);

	for (index = 0; index < size && (check = cmp(array[index])) != 1; index++)
		;

	return (check ? index : result);
}
