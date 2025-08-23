#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*ft_copy_word(const char *s, char c, int *index)
{
	int		bnd;
	int		i;
	char	*word;

	bnd = 0;
	while (s[*index] && s[*index] != c)
	{
		bnd++;
		(*index)++;
	}
	word = malloc((bnd + 1) * sizeof(char));
	if (!word)
		return (NULL);
	(*index) -= bnd;
	i = 0;
	while (i < bnd)
	{
		word[i] = s[*index];
		(*index)++;
		i++;
	}
	word[bnd] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		ind;
	char	**res;

	if (!s)
		return (NULL);
	res = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	ind = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		res[ind] = ft_copy_word(s, c, &i);
		if (!res[ind])
			return (NULL);
		ind++;
		while (s[i] == c)
			i++;
	}
	res[ind] = NULL;
	return (res);
}
