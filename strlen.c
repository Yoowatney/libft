#include <stdio.h>
#include <string.h>

unsigned long ft_strlen(const char *str)
{
	unsigned long i;

	i = 0;
	while (str[i] != '\0')
	{
		 i++;
	} 
	return (i);
}

int main()
{
	char str[] = "123456789";

	printf("%ld\n", strlen(str));
	printf("%ld ", ft_strlen(str));

}
