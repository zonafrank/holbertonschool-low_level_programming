int int_index(int *array, int size, int (*cmp)(int))
{
	int result = -1;
	int index;
	int check = 0;

	for (index = 0; index < size && (check = cmp(array[index])) != 1; index++)
		;

	return check ? check : result;
}
