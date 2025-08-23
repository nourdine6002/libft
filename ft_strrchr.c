#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				len;
	unsigned char	*p;

	len = ft_strlen(s);
	p = (unsigned char *)s;
	i = len - 1;
	while (i >= 0)
	{
		if (p[i] == (unsigned char)c)
			return ((char *)&p[i]);
		i--;
	}
	if ((char)c == '\0')
		return ((char *)&p[i]);
	return (NULL);
}
