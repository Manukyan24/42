#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	int i;
	int j; 

	i = 1;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	while (nb / i != 0)
		i *= 10;
	i /= 10;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	j = 0;
	while (i >= 1)
	{
		ft_putchar('0' + (int)(nb / i) % 10);
		i /= 10;
	}
}

int main()
{
	ft_putnbr(-1000000);

}


