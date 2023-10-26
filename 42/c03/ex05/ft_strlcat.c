unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	int j;
	int src_size;
	int dst_size;

	src_size = 0;
	j = 0;
	i = 0;
	while (src[src_size] != '\0')
		src_size++;
	while (dest[i] != '\0')
		i++;
	dst_size = i;
	while (src[j] != '\0' && i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[size - 1] = '\0';
	return (dst_size + src_size);
}

#include <stdio.h>
#include <string.h>
int main()
{
	int a;
	char d[30] = "";
	char s[] = "3563";
	a = ft_strlcat(d, s, sizeof(d));
	printf("%s\na = %d\n", d,a);
}
