#include <stdio.h>
int main5() {
	int iStar;
	for (int i = 0; i < 5; ++i) {
		iStar = i + 1;
		for (int j = 0; j < iStar; ++j) {
			printf("*");
		}
		printf("\n");
		
	}
	

	return 0;
}