//최대공약수 출력 유클리드 호제법
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void getGcd(int iNo1, int iNo2);
int main5() {
	// iNo1 > iNo2
	int iNo1 = 9;
	int iNo2 = 6;
	getGcd(iNo1, iNo2);
	return 0;
}
void getGcd(int iNo1, int iNo2) {
	int iRes;
	if (iNo2 == 0) {
		iRes = iNo1;
		printf("%d", iRes);
	}
	else {
		getGcd(iNo2, iNo1 % iNo2);
	}

}