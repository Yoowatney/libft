#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("%s\n", strnstr("1234567", "23", 2));
	return (0);
}
