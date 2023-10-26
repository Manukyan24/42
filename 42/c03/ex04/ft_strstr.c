char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int found;

	found  = 0;
	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] != '\0' && str[i + j] != '\0')
			{
				if (to_find[j] == str[i + j])
					found = 1;
				else
				{
					found = 0;
					break;
				}
				j++;
			}
			if (found == 1 && to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "VovaVovaVova";
	char f[] = "Vova";
	int ss = (strstr(s,f) == ft_strstr(s, f));
	printf("s = %d\n", ss);
	//printf("standart = %s\nimplement = %s\n", strstr(s,f), ft_strstr(s,f));
}
