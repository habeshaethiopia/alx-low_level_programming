/**
 * swap_int - Function to swap two variables
 * @a: var
 * @b: var
 *
 */
void swap_int(int *a, int *b)
{
	int *t;

	t = a;
	*a = *b;
	*b = *t;
}
