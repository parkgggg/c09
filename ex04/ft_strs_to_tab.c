#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

char	*strdup(char	*src)
{
	int	index;
	char	*dest;

	index = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if(!dest)
		return (0);
	while(src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int	index;
	struct	s_stock_str	*strt;

	strt = ((struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1)));
	if(!strt)
		return (0);
	index = 0;
	while(index < ac)
	{
		strt[index].size = ft_strlen(av[index]);
		strt[index].str = av[i];
		strt[index].copy = ft_strdup(av[i]);
		index++;
	}
	strt[index].str = 0;
	return (strt);
}
