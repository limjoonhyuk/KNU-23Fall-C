#include <stdio.h>

int main(void)
{

	int jumsu = 0;

	scanf_s("%d", &jumsu);

	if (jumsu >= 90)
		printf("���� %d�� A�Դϴ�.\n", &jumsu);

	else if (jumsu >= 80)
		printf("���� %d�� B�Դϴ�.\n", &jumsu);

	else if (jumsu >= 70)
		printf("���� %d�� C�Դϴ�.\n", &jumsu);

	else if (jumsu >= 60)
		printf("���� %d�� D�Դϴ�.\n", &jumsu);

	else if (jumsu >= 50)
		printf("���� %d�� F�Դϴ�.\n", &jumsu);

	else if (jumsu > 100 || jumsu < 0)
		printf("�߸� �Է��߽��ϴ�.");

	return 0;
}
