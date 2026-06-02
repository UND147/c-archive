#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 100
#include <stdio.h>
#include "my_lib_z.h"
void main()
{
	int iArr[ARRSIZE] = { 11, 3, 8, 2, 9 };
	sortSelection(iArr, ARRSIZE);
}
