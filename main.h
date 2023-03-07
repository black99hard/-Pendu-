#ifndef DEF_DICO
#define DEF_DICO
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int win(int foundLetter[], int wordSize);
int findeLetter(char letter, char secretWord[], int foundLetter[]);
char readCharacter();
int aleatoryNumber(int maxNumber);
int findWord(char *chosenWord);

#endif