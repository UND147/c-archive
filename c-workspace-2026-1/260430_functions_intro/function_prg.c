//정수 1개를 입력받아 반환하는 함수 작성
//2개의 정수를 매개값으로 받아 합을 반환하는 함수
//위 2개의 함수를 사용하는 main()작성
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getInt();
int addInt(int iNo1, int iNo2);

int main() {
	int iRes1, iRes2;

	iRes1 = getInt();
	printf("%d\n", iRes1);
	iRes2 = addInt(7, 8);
	printf("%d", iRes2);

	return 0;
}

int getInt() {
	int iNo1;

	printf("정수 1개 입력 : ");
	scanf("%d", &iNo1);

	return iNo1;
}
int addInt(int iNo1, int iNo2) {
	int iRes;

	iRes = iNo1 + iNo2;

	return iRes;
}