#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>

void main()
{
	int iNo;
	int iLine, iStar, iBlank;
	int iOdd;

	while (TRUE) {
		printf("0이상의 홀수 입력 : ");
		scanf("%d", &iNo);

		if (iNo == 0) {
			break;
		}
		iOdd = iNo % 2;
		if (iOdd == TRUE) {
			iLine = (iNo / 2) + 1;
			for (int i = 0; i < iLine; ++i) {
				iStar = (i * 2) + 1;
				iBlank = (iLine - i) - 1;
				for (int j = 0; j < iBlank; ++j) {
					printf(" ");
				}
				for (int j = 0; j < iStar; ++j) {
					printf("*");
				}
				printf("\n");
			}
		}
		else {
			printf(" 홀수 please .....\n");
		}
		
		
	}



	

	

}