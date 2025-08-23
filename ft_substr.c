#include "libft.h"

size_t	ft_strlen(const char *str)
{
    size_t	i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strdup(const char *str)
{
    size_t i;
    char *arr;

    arr = malloc((ft_strlen(str) + 1) * sizeof(char));
    if (!arr)
        return (NULL);
    i = 0;
    while (str[i])
    {
        arr[i] = str[i];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;

    if (!s)
        return (NULL);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    sub = malloc((len + 1) * sizeof(char));
    if (!sub)
        return (NULL);
    i = 0;
    while (i < len)
    {
        sub[i] = s[i + start];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}