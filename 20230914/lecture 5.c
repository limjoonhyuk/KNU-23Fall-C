#include <stdio.h>


int main(void)
{
	int year = 0;
	scanf_s("%d", &year);

	int yy = (year % 4 == 0) && (year % 100 != 0)
		&& (year % 400 == 0);

	if (yy)
		printf("¿±≥‚¿‘¥œ¥Ÿ.\n");
	else
		printf("¿±≥‚¿Ã ≥≥¥œ¥Ÿ.\n");
	return 0;
}

	
		
