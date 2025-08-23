#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_src;
	unsigned char	*p_dest;

	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	i = 0;
	if (dest == src || n == 0)
		return (dest);
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
