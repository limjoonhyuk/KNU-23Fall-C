#include <stdio.h>


int main(void)
{
	int year = 0;
	scanf_s("%d", &year);

	int yy = (year % 4 == 0) && (year % 100 != 0)
		&& (year % 400 == 0);

	if (yy)
		printf("�����Դϴ�.\n");
	else
		printf("������ ���ϴ�.\n");
	return 0;
}

	
		
