#include "libft.h"

void	*ft_memmove_backward(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_src;
	unsigned char	*p_dest;

	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	i = n;
	while (i > 0)
	{
		i--;
		p_dest[i] = p_src[i];
	}
	return (dest);
}

void	*ft_memmove_forward(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_src;
	unsigned char	*p_dest;

	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == src || n == 0)
		return (dest);
	if (dest > src)
		return (ft_memmove_backward(dest, src, n));
	else
		return (ft_memmove_forward(dest, src, n));
}
