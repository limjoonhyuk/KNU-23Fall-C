
#include <stdio.h>

int main(void){
	int n, i, j;
	scanf_s("%d", &n);
	printf("%d�� �Ƕ�̵�\n",n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf(" ");

		}
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}


return 0;
}