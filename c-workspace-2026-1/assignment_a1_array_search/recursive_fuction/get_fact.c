#include <stdio.h>
int getFactotial(int iNo);
void getBinary(int iNo);
int getGcd(int iNo1, int iNo2);
void hanoitop(int iNo, char cA, char cB, char cC);
void main()
{
	int iRes;

	//iRes = getFactotial(4);
	//getBinary(10);

	//iRes = getGcd(50, 10);
	//printf("%d", iRes);
	hanoitop(3, 'A', 'B', 'C');

}
void hanoitop(int iNo, char cA, char cB, char cC)
{
	if (iNo == 1) {
		printf("%d를 %c에서 %c로 이동\n", iNo, cA, cC);
	}
	else {
		hanoitop(iNo - 1, cA, cC, cB);
		printf("%d를 %c에서 %c로 이동\n", iNo, cA, cC);
		hanoitop(iNo - 1, cB, cA, cC);
	}
}
int getGcd(int iNo1, int iNo2)
{
	int iRes;
	if (iNo2 == 0) {
		iRes = iNo1;
	}
	else {
		iRes = getGcd(iNo2, iNo1 % iNo2);
	}
}

void getBinary(int iNo)
{
	if (iNo == 1) {
		printf("1");
	}
	else {
		getBinary(iNo / 2);
		printf("%d", iNo % 2);
	}
}




int getFactotial(int iNo)
{
	int iRes;

	if (iNo == 1) {
		iRes = 1;
	}
	else {
		iRes = iNo * getFactotial(iNo - 1);
	}
	return iRes;
}