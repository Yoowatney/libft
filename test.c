#include <stdio.h>

int main()
{
	int *arr;

	printf("%p\n", &arr);
	&arr = 1;
//	arr[0] = 0;
	return (0);
//	*arr = 1;
//	printf("%p", (char *)arr + 1);
//	return (0);
}
