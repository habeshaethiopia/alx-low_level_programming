/**
 * set_string - function to set pointer to a char
 * @s: apointer of pointer
 * @to: char pointer
 *
 */
void set_string(char **s, char *to)
{
	char **x = s;

	*x = to;
}
