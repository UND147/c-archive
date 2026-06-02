#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14  // 원주율은 3.14
#include <stdio.h>

int main()
{
	double dRadius;
	double dCircleArea;

	printf("원의 반지름을 입력하시오 : ");
	scanf("%lf", &dRadius);

	dCircleArea = PI * dRadius * dRadius;
	printf("원의 면적 : %.2lf\n", dCircleArea);
	return 0;
}
