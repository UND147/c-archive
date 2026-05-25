#include "score.h"

double calculateFinalScore(int scores[SUBJECT_COUNT])
{
    return scores[0] * 0.30
         + scores[1] * 0.40
         + scores[2] * 0.20
         + scores[3] * 0.10
         - scores[4];
}
