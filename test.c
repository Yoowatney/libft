/** #include <stdio.h> */
/** -- void -> char로 변환시 주소이동이 하나씩 가능하지만 */
/** int -> char은 안됨? */
/** int main() */
/** { */
/**     void *arr; [> int로 변환시 마음대로 못하는,,<] */
/**     int num = 1; */
/**     arr = &num; */
/**     printf("arr : %p\n", arr); */
/**     *(char *)arr = 1; */
/**     arr++; */
/**     printf("arr : %p\n", arr); */
/**  */
/** } */
#include <stdio.h>
#include <string.h>

int main()
{
	int ori[25];
	printf("%ld", sizeof(ori));
	return (0);
	for (int i = 0; i < 20; i++)
	{
		ori[i] = i + 1;
	}
	memmove(ori + 4, ori + 2, sizeof(int) * 17);
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", ori[i]);
	}
}

