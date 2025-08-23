#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcopy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*strj;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	strj = malloc((l1 + l2 + 1) * sizeof(char));
	if (!strj)
		return (NULL);
	ft_strcopy(strj, s1, l1);
	ft_strcopy(strj + l1, s2, l2);
	strj[l1 + l2] = '\0';
	return (strj);
}
