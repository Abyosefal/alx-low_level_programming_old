/**
* *_strcpy - copies string from one var to other using pointer
* @dest: str copy to
* @src: str original pointer
* Return: char
*/
void _strcpy(char *dest, char *src)
{
	int i, len;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
}
