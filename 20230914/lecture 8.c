#include <stdio.h>
int main(void)

{
	int jumsu = 0;
	int mok = 0;
	mok = jumsu / 10;

	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0) {
		printf("잘못 입력했습니다.\n");
		return 0;
	}
	switch (mok)
	{
	case 10:
	case 9:
			printf("A학점이다.");
			break;
	case 8:
		printf("B학점.");
		break;
	case 7:
		printf("C학점.");
	case 6:
		printf("D학점.");
		break;
	default:
		printf("F학점,");


	}
	return 0;
}