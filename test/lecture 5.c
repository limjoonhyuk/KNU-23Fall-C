#include <stdio.h>

void swap(int* pa, int* pb)
{
	int c = *pa;
	*pa = *pb;
	*pb = *pa;
	
}

int main(void)
{

	int a = 10;
	int b = 565;

	printf("%d %d\n", a, b);
	swap(a, b);
	printf("%d %d\n", a, b);

	return 0;


}