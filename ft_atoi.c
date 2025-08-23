#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	neg;
	size_t	res;

	i = 0;
	neg = 1;
	while (str[i] == ' ' || (str[i] >= 8 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * neg);
}
