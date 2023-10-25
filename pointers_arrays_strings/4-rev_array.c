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
