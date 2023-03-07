#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatoryNumber(int maxNumber)
{
    srand(time(NULL));
    return (rand() % maxNumber);
}