#include <stdio.h>

void main()
{
	int iNo, iInputVal;
	int iMod, iDiv;
	int iRes;

	iInputVal = 321;
	iNo = iInputVal;
	iRes = 0;


	iMod = iNo % 10;  // 1
	iRes = iRes * 10 + iMod;
	iNo = iNo / 10;  //32

	iMod = iNo % 10;  // 2
	iRes = iRes * 10 + iMod;
	iNo = iNo / 10;  //3

	iMod = iNo % 10; // 3
	iRes = iRes * 10 + iMod;
	iNo = iNo / 10;  // 0

	printf("%d  ---> %d\n", iInputVal, iRes);


}