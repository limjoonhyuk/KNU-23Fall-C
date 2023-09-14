#include <stdio.h>

int main(void)
{

	int jumsu = 0;

	scanf_s("%d", &jumsu);

	if (jumsu >= 90)
		printf("점수 %d는 A입니다.\n", &jumsu);

	else if (jumsu >= 80)
		printf("점수 %d는 B입니다.\n", &jumsu);

	else if (jumsu >= 70)
		printf("점수 %d는 C입니다.\n", &jumsu);

	else if (jumsu >= 60)
		printf("점수 %d는 D입니다.\n", &jumsu);

	else if (jumsu >= 50)
		printf("점수 %d는 F입니다.\n", &jumsu);

	else if (jumsu > 100 || jumsu < 0)
		printf("잘못 입력했습니다.");

	return 0;
}
