
#include <stdio.h>

int main()
{
	int x, y;
	printf("Enter Value of x ");
	scanf("%d", &x);
	printf("\nEnter Value of y ");
	scanf("%d", &y);

	int number = x;
	x = y;
	y = number;

	printf("\n new value x = %d, y = %d", x, y);
	return 0;
}
