#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strstr(char *str, char *pattern, int pos)
{
	unsigned int	i;
	unsigned int	j;

	i = pos;
	while (str[i] != '\0')
	{
		j = 0;
		while (pattern[j] == str[i + j])
		{
			if (pattern[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	count_words(char *str, char *charset)
{
	int	wc;
	int	i;

	i = 0;
	wc = 0;
	if (str[0] != '\0')
		wc = 1;
	while (str[i] != '\0' && i < ft_strlen(str))
	{
		if (ft_strstr(str,charset,i) != NULL)
		{
			i += ft_strlen(charset);
			if (str[i] != '\0')
				wc++;	
		}
		else
		{
			wc++;
			break ;
		}
	}
	return (wc);
}

char **ft_split(char *str, char *charset)
{
	int		wc;
	int		i;
	int		j;
	char	**arr;
	
	i = 0;
	j = 0;
	wc = count_words(str, charset);
	arr = (char**)malloc(wc * sizeof(char*));
	if (arr == NULL)
		return (NULL);
	if (str[i] != '\0')
		arr[i++] = &str[0];
	while (str[i] != '\0' && i < ft_strlen(str))
	{
		if (ft_strstr(str,charset, i) != NULL)
		{
			i += ft_strlen(charset);
			arr[j] = &str[i];
			j++;
		}
		else
		{
			arr[j] = &str[i];
			break ;
		} 
	}
	return (arr);
}

int main()
{
	char **arr = ft_split("Vladimir***Manukyan", "***");
	printf("%s\n", arr[0]);
	return (0);
}

