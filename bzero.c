#include <stdio.h>

void	ft_bzero(void *ptr, size_t size)
{
	unsigned long i;

	i = 0;
	while (i < size)
	{
		*(char *)ptr = 0;
		i++;
		ptr++;
	}
}

int main()
{
	long arr[10];

	ft_bzero(arr, sizeof(arr));
	for (unsigned long i = 0; i < sizeof(arr) / sizeof(long); i++)
	{
		printf("%ld ", arr[i]);
	}
	return (0);
}
