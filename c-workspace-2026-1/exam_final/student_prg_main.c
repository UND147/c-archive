// 225230001 정주호

#include <stdio.h>
#include "student_lib.h"

int main(void) {
	stStudent oStudent[STD_NO];
	int iFirstStudentIndex;
	double dAvgScore;

	// 학생정보을 입력받는 함수
	getStudentInfo(oStudent);
	
	// 별도의 함수에서 최고 성적의 학생 정보와 평균점수 계산
	iFirstStudentIndex = getFirstStudentIndex(oStudent);
	dAvgScore = getAvgScore(oStudent);

	// main 함수에서 학생이름 출력과 평균점수 출력
	printf("최고 성적의 학생이름 : %s\n평균점수 : %.2lf", oStudent[iFirstStudentIndex].sNameZ, dAvgScore);
	return 0;
}

