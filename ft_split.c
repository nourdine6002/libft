#include "libft.h"

char **ft_split(char const *s, char c)
{
    int i;
    int ind;
    int bnd;
    char **res;

    if (!s)
        return (NULL);
    res = malloc(1024 * sizeof(char *));
    if (!res)
        return (NULL);
    i = 0;
    while (s[i] == c)
    {
        i++;
    }
    ind = 0;
    while (s[i])
    {
        bnd = 0;
        res[ind] = malloc(100 * sizeof(char));
        while(s[i] && s[i] != c)
        {
            res[ind][bnd] = s[i];
            i++;
            bnd++;
        }
        res[ind][bnd] = '\0';
        while (s[i] == c)
        {
            i++;
        }
        ind++;
        
    }
    res[ind] = NULL;
    return (res);
}