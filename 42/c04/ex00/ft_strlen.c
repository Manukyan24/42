int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[++i] != '\0');
	return (i);
}

#include <stdio.h>
int main()
{
	char s[] = "a";
	printf("%d\n", ft_strlen(s));
}
