#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int iYear, iMod4, iMod100, iMod400;
	int iRes1, iRes2, iResult;

	printf("년도 : ");
	scanf("%d", &iYear);

	iMod4 = iYear % 4;
	iMod100 = iYear % 100;
	iMod400 = iYear % 400;

	iRes1 = (iMod4 == 0) && (iMod100 != 0);
	iRes2 = iMod400 == 0;

	iResult = iRes1 || iRes2;

	if (((iMod4 == 0) && (iMod100 != 0)) || iMod400 == 0) {
		printf("%d는 윤년입니다.\n", iYear);
	}
	else {
		printf("%d는 윤년이 아닙니다.\n", iYear);
	}





	
	return 0;
}
