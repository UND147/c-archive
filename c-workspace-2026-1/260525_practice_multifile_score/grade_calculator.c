#include <stdio.h>

#include "score.h"

#define STUDENT_COUNT 3

int main(void)
{
    int studentScores[STUDENT_COUNT][SUBJECT_COUNT] = {
        {87, 98, 80, 76, 3},
        {99, 89, 90, 90, 0},
        {65, 68, 50, 49, 0}
    };

    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("학생 #%d의 최종성적= %.2f\n",
               i + 1,
               calculateFinalScore(studentScores[i]));
    }

    return 0;
}
