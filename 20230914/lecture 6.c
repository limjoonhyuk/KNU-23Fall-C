#include <stdio.h>

int main(void)
{
	int input_num;

	printf("���� �Է� : ");
	scanf_s("%d", &input_num);

	if (input_num > 0)
		printf("�Է��� ����%d�� ���� �����Դϴ�.\n", input_num);
	else if (input_num < 0)
		printf("�Է��� ����%d�� ���� �����Դϴ�.\n", input_num);
	else
		printf("�Է��� ����%d�� 0�Դϴ�.", input_num);
	return 0;

}