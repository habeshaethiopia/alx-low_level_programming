/**
 * wildcmp - function to compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 od 1
 *
 */
int wildcmp(char* s1, char *s2)
{
	if ((*s2 == '*' && *(s2 + 1) == '\0'))
		return (1);
	if (*s2 == '*' && *(s2 + 1) != '*' && *s1 != '\0')	
	{
		if (*(s2 + 1) == *s1 && *(s2 + 1) != '\0')
			return (wildcmp(s1, s2 + 1));
		else
			return (wildcmp(s1 + 1, s2));
	}
	 if ((*s2 == '*' && *(s2 + 1) == '*' && *s1 != '\0') ||(*s2 == *s1 && *(s1 + 1) != '\0'))
		return (wildcmp(s1 + 1,s2 + 1));
	 if (*s1 == *s2 && *(s1 + 1) == '\0' && *(s2 + 1) == '\0')
		return (1);
	 else
		return (0);
}
