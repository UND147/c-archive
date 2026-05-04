#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>
int main() { //소수 판별
	int iNo;
	int iMod;
	int iDiv;
	int iCount;
	
	while(TRUE) {
		printf("정수 입력: ");
		scanf("%d", &iNo);

		if (iNo > 0) {
			iCount = 0;
			//0과1로나누는것은 의미없음 2로 시작 > 연산논리 iDiv = iNo % i > if iDiv == 0 이면 break 
			//if 조건식에서 bool flag활용 > for문을 다 돌았는지 판별 
			for (int i = 0; i < iNo; ++i) {
				iDiv = i + 1;
				iMod = iNo % iDiv; // 2 1 0 2 2 0 3 1 
				if (iMod == 0) {
					iCount++;
				}
				if (iCount > 2) {
					break;
				}
			}
			if (iCount == 2) {
				printf("소수\n");
			}
			else {
				printf("소수가아님\n");
			}
		}
		else if (iNo == 0) {
			printf("[exit]\n");
			break;
		} else {
			printf("[error]0보다 큰 숫자입력\n");
		}
	}
	return 0;
}