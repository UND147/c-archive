#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main0() {
	int iScore, iYear;
	char chGrade;
	int iScoreFlag;

	printf("성적을 입력하시오: ");
	scanf("%d", &iScore);
	
	
	if (iScore >= 90) 
	{
		chGrade = 'A';
	}
	else if ((iScore >= 80) && (iScore < 90)) {
		chGrade = 'B';
	}
	else if ((iScore >= 70) && (iScore < 80)) {
		chGrade = 'C';
	}
	else if ((iScore >= 60) && (iScore < 70)) {
		chGrade = 'D';
	}
	else {
		chGrade = 'F';
	}
	printf("학점 : %c", chGrade);
	
	return 0;
}