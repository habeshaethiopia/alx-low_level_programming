/**
 * reverse_array - function to reverse array
 * @a: the array that is to be reversed
 * @n: the number of elements in the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
