#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int win(int foundLetter[], int wordSize)
{
    int i = 0;
    int playerWins = 1;

    for (i = 0; i < 6; i++)
    {
        if (foundLetter[i] == 0)
            playerWins = 0;
    }
    return playerWins;

}