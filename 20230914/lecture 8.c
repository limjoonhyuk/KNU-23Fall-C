#include <stdio.h>
int main(void)

{
	int jumsu = 0;
	int mok = 0;
	mok = jumsu / 10;

	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0) {
		printf("�߸� �Է��߽��ϴ�.\n");
		return 0;
	}
	switch (mok)
	{
	case 10:
	case 9:
			printf("A�����̴�.");
			break;
	case 8:
		printf("B����.");
		break;
	case 7:
		printf("C����.");
	case 6:
		printf("D����.");
		break;
	default:
		printf("F����,");


	}
	return 0;
}