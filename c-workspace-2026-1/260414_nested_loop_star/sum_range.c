// 1~10 까지의 정수의 합을 출력하는 프로그램을 작성하시오
#include <stdio.h>
int main1() {
	int iSum;

	iSum = 0;
	for (int i = 1; i <= 10; ++i) {
		iSum = iSum + i;
	}
	printf("1~10까지의 합 : %d", iSum);
	return 0;
}