//225230001 정주호 
//학생 정보 lib 구현부
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student_lib.h"

void getStudentInfo(stStudent oStudent[STD_NO]) {
	for (int i = 0; i < STD_NO; ++i) {
		scanf("%s %lf", oStudent[i].sNameZ, &oStudent[i].dScore);
	}
}

int getFirstStudentIndex(stStudent oStudent[STD_NO]) {
	double dMax;
	int iIndex;
	dMax = oStudent[0].dScore;
	iIndex = 0;
	// 1부터 순회하면서 비교함
	for (int i = 1; i < STD_NO; ++i) {
		if (oStudent[i].dScore > dMax) {
			dMax = oStudent[i].dScore;
			iIndex = i;
		}
	}
	return iIndex;
}

double getAvgScore(stStudent oStudent[STD_NO]) {
	double dSum;
	double dAvg;
	dSum = 0;
	for (int j = 0; j < STD_NO; ++j) {
		dSum = dSum + oStudent[j].dScore;
	}
	dAvg = dSum / (STD_NO);
	return dAvg;
}