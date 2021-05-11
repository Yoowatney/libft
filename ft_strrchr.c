#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	size_t	str_len;
	size_t	i;

	str_len = ft_strlen(str);
	i = 0;
	while (1)
	{
		if (*(str + str_len) == c)
			return (str + str_len);
		if (i == ft_strlen(str))
			break ;
		str_len--;
		i++;
	}
	return (NULL);
}


/** int main() */
/** { */
/**     char str[10] = "1"; */
/**     printf("str : %p\n", str); */
/**     printf("%p\n", strrchr(str, '\0')); */
/**     printf("%p\n", ft_strrchr(str, '\0')); */
/** } */
