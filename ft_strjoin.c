#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2);
{
	size_t len;
	size_t i;

	i = 0;
	len = ft_strlen(s1);
	len += ft_strlen(s2);
	char *ret = malloc(sizeof(char) * (len + 1));

	while (*s1)
	{
		ret[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		ret[i] = *s2;
		s2++;
		i++;
	}
}
