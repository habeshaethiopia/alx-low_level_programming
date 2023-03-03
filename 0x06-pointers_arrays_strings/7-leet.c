/**
 * leet - afunction that encodes astring in to 1337
 * @x: the encoding string
 * Return: the encoded string
 *
 */
char *leet(char *x)
{
	int i = 0, j;
	int rpw[] = {'4', '3', '0', '7', '1'};
	char rp[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (x[i] != '\0')
	{
		for (j = 0; j < 10; j++)
			if (x[i] == rp[j])
			{
				x[i] = rpw[j / 2];
				break;
			}
		i++;
	}
	return (x);
}
