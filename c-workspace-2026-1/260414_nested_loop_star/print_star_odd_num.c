#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>
void main() {
	int iNo;
	int iMod2;
	int iLine;
	int iStar;
	int iBlank;

		
		while (TRUE) {
			printf("# 0이상의 홀수 정수를 입력:");
			scanf("%d", &iNo);

			iMod2 = iNo % 2;
			if ((iNo >= 0) && (iMod2 == 1))
			{
				iLine = (iNo / 2) + 1;
				for (int i = 0; i < iLine; ++i)
				{
					//iBlank = iLine - (iStar/2) - 1; 
					iBlank = (iLine - 1) - i;
					for (int k = 0; k < iBlank; ++k)
					{
						printf(" ");
					}
					iStar = (i * 2) + 1;
					for (int j = 0; j < iStar; ++j)
					{
						printf("*");
					}
					printf("\n");
				}
			}
			else if (iNo == 0) {
				printf("[종료]\n");
				break;
			}
			else {
				printf("[오류]\n");
			}
		}
		
		printf("\n");
	}
