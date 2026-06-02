#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>

void main()
{
	int iMenuNo, iCupCnt; // 선언문
	int iTotalMoney;
	int iPrice;

	iTotalMoney = 0;
	while (TRUE) {
		printf("======== MiniCafe Menu =======\n");
		printf("=== 1. 에스프레소	1000원\n");
		printf("=== 2. 아메리카노	1500원\n");
		printf("=== 3. 카페라떼		2000원\n");
		printf("==============================\n");
		printf("메뉴와 잔수 입력 : ");
		scanf("%d%d", &iMenuNo, &iCupCnt);
		if (iMenuNo == 0) {
			
			break;
		}

		switch (iMenuNo) {
		case 1:
			iPrice = iCupCnt * 1000;
			printf("[%s]-[%d잔]-[%d]원 판매\n", sMenuName, iCupCnt, iPrice);
			
			break;
		case 2:
			iPrice = iCupCnt * 1500;
			printf("[%s]-[%d잔]-[%d]원 판매\n", sMenuName, iCupCnt, iPrice);
			
			break;
		case 3:
			iPrice = iCupCnt * 2000;
			printf("[카페라떼]-[%d잔]-[%d]원 판매\n", iCupCnt, iPrice);
			
			break;
		default:
			iPrice = 0;
			printf("없는 메뉴입니다.\n");
		} // End Switch
		iTotalMoney = iTotalMoney + iPrice;
	} // End While
	printf("오늘 총 판매 금액 : %d\n", iTotalMoney);
	
}