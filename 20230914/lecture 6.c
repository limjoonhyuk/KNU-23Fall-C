#include <stdio.h>

int main(void)
{
	int input_num;

	printf("정수 입력 : ");
	scanf_s("%d", &input_num);

	if (input_num > 0)
		printf("입력한 정수%d는 양의 정수입니다.\n", input_num);
	else if (input_num < 0)
		printf("입력한 정수%d는 음의 정수입니다.\n", input_num);
	else
		printf("입력한 정수%d는 0입니다.", input_num);
	return 0;

}