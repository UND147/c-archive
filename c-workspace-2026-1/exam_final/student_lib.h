//225230001 정주호 
//학생 정보 lib 선언부
#pragma once
#define NAME_LEN 16 // 학생 이름 길이 할당
#define STD_NO 10 // 입력할 학생 명수

typedef struct {
	char sNameZ[NAME_LEN];
	double dScore; // C언어 성적
}stStudent;

void getStudentInfo(stStudent oStudent[STD_NO]);
int getFirstStudentIndex(stStudent oStudent[STD_NO]);
double getAvgScore(stStudent oStudent[STD_NO]);