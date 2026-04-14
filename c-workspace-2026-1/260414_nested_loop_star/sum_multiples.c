// 1~100 사이의 3 의 배수의 합을 구하는 프로그램을 작성하시오
#include <stdio.h>
void main2() {
	int iSum;
	int iMod;

	iSum = 0;
	
	for (int i = 1; i <= 100; ++i) {
		iMod = i % 3;
		if (iMod == 0) {
			iSum = iSum + i;
		}
	}
	printf("1~100 사이의 3의 배수의 합 : %d", iSum);
	
}