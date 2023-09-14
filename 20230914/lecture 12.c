#include <stdio.h>

int main(void)
{
	int cnt, ox;
	cnt = 1;

	while (cnt <= 5)
	{
		ox = 1;
		while (ox <= 5)
		{
			if (cnt == ox)
			{
				if (cnt % 2 != 0)
					printf("|0|");
				else
					printf("|X|");

			}
			else
				printf("   ");
			ox++;
		}
		printf("\n");
		printf("-------------\n");
		cnt++;
	}
	return 0;
}