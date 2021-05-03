#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*memeset(void *ptr, int value, size_t num)
{
	unsigned long i;
	
	i = 0;
	while (i < num)
	{
		*(char *)ptr = value;
		i++;
		ptr++;
	}
	return (ptr);
}

int main()
{
	int arr[10];
	memeset(arr, 1, sizeof(arr));
	for (int i = 0; i < 10; i++)
	{
		printf("%c ", arr[i]);
	}
	memset(arr, 1, sizeof(arr));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	memeset(arr, 'b', sizeof(arr));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%c ", arr[i]);
//	}
	return (0);
}
