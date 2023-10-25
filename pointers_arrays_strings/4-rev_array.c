/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int low = 0;
	int high = n - 1;
	int tmp;

	while (low < high)
	{
		tmp = a[low];
		a[low] = a[high];
		a[high] = tmp;
		low++;
		high--;
	}
}
