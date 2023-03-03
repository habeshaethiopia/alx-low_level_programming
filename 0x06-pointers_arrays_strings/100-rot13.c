/**
 * rot13 - afunction that encodes astring using rot13
 * @str: a char pointer
 * Return: a char pointer
 *
 */
char *rot13(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		 for (; ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i]<= 'Z')); i++)
			 str[i] -= 13;
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i]<= 'M'))
			str[i]  += 13;
	}
	return (str);
}
