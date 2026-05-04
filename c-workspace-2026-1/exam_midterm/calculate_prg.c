//225230001 정주호
#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>
int main() {
	int iNo1, iNo2;
	int iRes;
	double dRes;
	int iFlag;
	char chOper;

	while (TRUE) {
		printf("연산식을 입력 하시오 : ");
		scanf("%d%c%d", &iNo1, &chOper, &iNo2);
		// 0/0 입력시 프로그램 종료
		if (chOper == '/' && iNo1 == 0 && iNo2 == 0) {
			printf("[END]프로그램종료");
			break;
		}
		iFlag = 0;
		iRes = 0;
		if (chOper == '+') {
			iRes = iNo1 + iNo2;
			iFlag = 1;
		}
		else if (chOper == '-') {
			iRes = iNo1 - iNo2;
			iFlag = 1;
		}
		else if (chOper == '*') {
			iRes = iNo1 * iNo2;
			iFlag = 1;
		}
		else if (chOper == '/') {
			if (iNo2 != 0) {
				dRes = (double) iNo1 / iNo2;
				iFlag = 1;
			}
			else {
				printf("[ERROR] 두 번째 정수가 0임\n");
			}
		}
		else {
			printf("[ERROR] 연산식이 틀림, '+' '-' '*' '/' 만 입력가능\n");
		}
		if (iFlag == 1 && chOper == '/') { //나눗셈 결과는 소숫점 아래 두자리 까지 출력
			printf("%d %c %d = %.2lf\n", iNo1, chOper, iNo2, dRes);
		}
		else if (iFlag == 1) {
			printf("%d %c %d = %d\n", iNo1, chOper, iNo2, iRes);
		}
	}
}
