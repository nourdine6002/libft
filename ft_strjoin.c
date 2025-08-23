#include "libft.h"

size_t	ft_strlen(const char *str)
{
    size_t	i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    size_t l1;
    size_t l2;
    char *strj;

    if (!s1 || !s2)
        return (NULL);
    l1 = ft_strlen(s1);
    l2 = ft_strlen(s2);
    strj = malloc((l1 + l2 + 1) * sizeof(char));
    i = 0;
    while (i < l1)
    {
        strj[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < l2)
    {
        strj[i + j] = s2[j];
        j++;
    }
    strj[i + j] = '\0';
    return (strj);
}