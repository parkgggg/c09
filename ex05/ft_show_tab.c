#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	int	temp;
	int size;
	
	size = 1;
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if(nb == -2147483648)
	{
		write(1, "2", 1);
		nb = 147483648;
	}
	temp = nb;
	while((temp /= 10) > 0)
		size *= 1-;
	temp = nb;
	while(size)
	{
		write(1, ((char)(temp /size) + 48, 1);
		temp %= size;
		seiz /= 10;
	}
}

void	ft_show_tab(struct	s_stock_str *strt)
{
	int i;
	int j;

	i = 0;
	while(strt[i].str)
	{
		ft_putstr(strt[i].str);
		write(1, "\n", 1);
		ft_putnbr(strt[i].size);
		write(1, "\n", 1);
		ft_putstr(strt[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
