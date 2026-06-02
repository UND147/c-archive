#include <stdio.h>

int main()
{
	int x, y;
	int iSum, iSub, iMul;
	double dDiv;

	x = 3;
	y = 2;

	iSum = x + y;
	iSub = x - y;
	iMul = x * y;
	dDiv = (double)x / y;

	printf("%d + %d  : %3d \n", x, y, iSum);
	printf("%d - %d  : %d \n", x, y, iSub);
	printf("%d * %d  : %d \n", x, y, iMul);
	printf("%d / %d  : %.2lf \n", x, y, dDiv);

	return 0;
}