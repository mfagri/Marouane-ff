#include <stdio.h>
char *ft_strncpy(char *dest, char *src , unsigned int n)
{
	int i;
	i = 0;
	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] != '\0';
	return dest;
}
int main()
{
	char dest[6];
	printf("%s",ft_strncpy(dest,"marouane",5));
}
