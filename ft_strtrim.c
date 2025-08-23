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

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t len;
    char *clean;
    int i;
    
    i = 0;
    if (!s1 || !set)
        return (NULL);
    len = ft_strlen(s1);
    end = len - 1;
    while (s1[end] && ft_strchr(set, s1[end]))
    {
        end--;
    }
    start = 0;
    while(s1[start] && ft_strchr(set, s1[start]))
    {
        start++;
    }
    clean = malloc((end - start + 1) * sizeof(char));
    
    while (start <= end)
    {
        clean[i] = s1[start];
        start++;
        i++;
    }
    clean[i] = '\0';
    return (clean);
}