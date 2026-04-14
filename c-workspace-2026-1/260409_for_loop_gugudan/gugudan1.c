#include <stdio.h>
void main() {
	int iDan, iTotal;
	int iMult;
	
	iDan = 5;
	for (int i = 0; i < 9; ++i) {
		iMult = i + 1;
		iTotal = iDan * iMult;

		printf("%d x %2d = %2d\n",iDan,iMult,iTotal);
	}
}