#include "main.h"




int main()
{
    char letter = 0;
    char secretWord[100] = {0};
    int *foundLetter = NULL;
    int remainingTries = 10;
    int i = 0;
    int wordSize =0;

     printf("Welcome !\n\n");
    if (!findWord(secretWord))
    {
        printf("fie");
         exit(0);
    }

    wordSize = strlen(secretWord);
    foundLetter = malloc(wordSize * sizeof(int));
    
    if (foundLetter == NULL)
    {
         exit(0);
    }

    for ( i =0; i < wordSize; i++)
    {
        foundLetter[i] = 0;
    }

    
    while ( remainingTries > 0 && !win(foundLetter,  wordSize))
    {
        printf("\n\nYou have %d remaining tries", remainingTries);
        printf("\n\nWhat is the secret word ?");

        for (i = 0; i < 6; i++)
        {
            if (foundLetter[i])
            {
                    printf("%c", secretWord[i]);
            }
            else
            {
                    printf("*");
            }

        }

        printf("\n Suggest a letter : ");
        letter = readCharacter();

        if (!findeLetter(letter, secretWord, foundLetter))
        {
            remainingTries--;

        }

    
    }

    if (win(foundLetter,  wordSize))
    {
        printf("\n\nYou win ! the secret word is : %s", secretWord);
    }

    else
    {
        printf("\n\nYou lose ! the secret word is : %s",secretWord);
    }
    
return 0;
}
