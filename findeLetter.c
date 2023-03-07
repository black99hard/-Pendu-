#include "main.h"


int findeLetter(char letter, char secretWord[], int foundLetter[])
{
    int i = 0;
    int rightLetter = 0;

    for (i = 0; secretWord[i] != '\0'; i++)
    {
        if (letter == secretWord[i])
        {
            rightLetter = 1;
            foundLetter[i] = 1;

        }


    }

    return (rightLetter);
}