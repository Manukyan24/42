int ft_is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int ft_is_in_rules(char c)
{
	if (!ft_is_space(c) || c != '+' || c != '-' || (c < '0' && c > '9')
		return (0);
	return (1)	
}

int	ft_atoi(char *str)
{
	int	neg_count
	int	num;
	int	i;
	
	neg_count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_space(str[i]))
			continue ;
		if (str[i] == '-')
			neg_count++;
		if (!ft_is_in_rules(c))
			break ;
	}
}
