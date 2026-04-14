#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>
int main() {
	int iNo = 0;
	int iCup = 1;
	//int iSumP;
	int iPrice1 = 1500;
	int iPrice2 = 2000;
	int iPrice3 = 2500;
	int iTotal;
	int iCount1 = 0, iCount2 = 0, iCount3 = 0;
	char chMenu1[] = "아메리카노";
	char chMenu2[] = "카페라떼";
	char chMenu3[] = "아이스티";
	while (TRUE) {
		printf("======= 나의 작은 카페 메뉴 ======\n");
		printf("1. %s\t%d원\n", chMenu1, iPrice1);
		printf("2. %s\t%d원\n", chMenu2, iPrice2);
		printf("3. %s\t%d원\n", chMenu3, iPrice3);
		printf("==================================\n");
		printf("메뉴를 입력하세요 : ");
		scanf("%d", &iNo);
		
		if (iNo == 0) {
			break;
		}
		
		switch (iNo) {
		case 1:
			printf("[%s]-[%d잔]-%d원\n", chMenu1, iCup, iPrice1);
			iCount1++;
			break;
		case 2:
			printf("[%s]-[%d잔]-%d원\n", chMenu2, iCup, iPrice2);
			iCount2++;
			break;
		case 3:
			printf("[%s]-[%d잔]-%d원\n", chMenu3, iCup, iPrice3);
			iCount3++;
			break;
		default:
			printf("없는 메뉴입니다");
			break;
		}
		iTotal = (iPrice1 * iCount1) + (iPrice2 * iCount2) + (iPrice3 * iCount3);
		
	}
	printf("판매한 총 금액 : %d", iTotal);

	return 0;
}