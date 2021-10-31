#include<stdio.h>
#include<string.h>
char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	i = 0;
	if(*to_find == '\0')
		return str;
	while(str[i] != '\0')
	{
		j = 0;
		while(str[i + j] != '\0' && str[i +j] == to_find[j])
		{
			if(to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
int main()
{
	char a[100] = "marwan fagri";
	char b[100] = "wan fag";
	//strstr(a,b);
//	printf("%s\n",a);
	printf("%s\n",ft_strstr(a,b));
}
