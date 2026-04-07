#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main0() {
	int iNo = 0;
	int iCup = 1;
	int iMenu1 = 1500;
	int iMenu2 = 2000;
	int iMenu3 = 2500;
	char chMenu1[] = "아메리카노";
	printf("======= 나의 작은 카페 메뉴 ======\n");
	printf("1. %s\t%d원\n", chMenu1, iMenu1);
	printf("2. 카페라떼\t%d원\n", iMenu2);
	printf("3. 아이스티\t%d원\n", iMenu3);
	printf("==================================\n");
	printf("메뉴를 입력하세요 : ");
	scanf("%d", &iNo);

	switch (iNo) {
	case 1:
		printf("[아메리카노]-[%d잔]-%d원", iCup, iMenu1);
		break;
	case 2:
		printf("[카페라떼]-[%d잔]-%d원", iCup, iMenu2);
		break;
	case 3:
		printf("[아이스티]-[%d잔]-%d원", iCup, iMenu3);
		break;
	default:
		printf("없는 메뉴입니다");
		break;
	}
}