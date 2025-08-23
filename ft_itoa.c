#include "libft.h"

int	count_num(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;
	int		len;

	len = count_num(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	nb = n;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	i = len - 1;
	while (nb != 0)
	{
		str[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	str[len] = '\0';
	return (str);
}
