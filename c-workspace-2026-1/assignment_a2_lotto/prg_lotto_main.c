// A2 225230001 정주호
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib_lotto_logic.h"

#define ARR_SIZE 6
#define MAX_LOTTO_NO 45
#define TRUE 1
#define FALSE 0
#define LOTTO_REPEAT_COUNT 5

int main(void) {
	srand(time(0)); // 현재 시간 기반 난수 시드 설정
	
	int iLottoArr[ARR_SIZE] = {0};
	
	//루틴 총 반복
	for (int iLoop = 0; iLoop < LOTTO_REPEAT_COUNT; ++iLoop) {
		
		// 로또 번호 생성
		getLottoNo(iLottoArr);
		// 로또 번호 정렬
		sortArrAsc(iLottoArr);
		// 로또 번호 출력
		prnArr(iLottoArr, iLoop);
	
	}

	return 0;
}