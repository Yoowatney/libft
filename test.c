#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a[10] = {0,};
	memset(a, 1, sizeof(a));
	printf("%d", a[0]);


}

