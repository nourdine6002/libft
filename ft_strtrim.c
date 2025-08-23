#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

size_t	ft_find_start(const char *s1, const char *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	return (start);
}

size_t	ft_find_end(const char *s1, const char *set, size_t len)
{
	size_t	end;

	end = len - 1;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*clean;
	int		i;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set, len);
	clean = malloc((end - start + 2) * sizeof(char));
	if (!clean)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		clean[i] = s1[start];
		start++;
		i++;
	}
	clean[i] = '\0';
	return (clean);
}
