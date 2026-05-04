#include <stdio.h>

void main1() {
	int iDan, iMultip, iResult;
	for (int k = 0; k < 3; ++k) {
		for (int j = 0; j < 9; ++j) {
			for (int i = 0; i < 3; ++i) {
				iDan = (3 * k) + i + 1;
				iMultip = j + 1;
				iResult = iDan * iMultip;
				printf("%d x %d = %2d\t", iDan, iMultip, iResult);
			}
			printf("\n");
		}
		printf("==========================================\n");
	}
}