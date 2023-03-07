

#include "main.h"

int findWord(char *chosenWord)
{/*an pointer that hold the file*/
FILE *dico = NULL;

    int wordsNumber = 0, chosenWordNumber =0, i = 0;
    int characterRead = 0;

    dico = fopen("dico.txt", "r");
    /*if failled to open the file it should retun 0 as well with a message*/
    if (dico == NULL)
    {
        printf("\nSometing went wrong we can not get the world, please try again later");
        return (0);
    }
    do
    {
        characterRead = fgetc(dico);
        
        if ( characterRead == '\n')
                wordsNumber++;

    } while (characterRead != EOF);
    

chosenWordNumber = aleatoryNumber(wordsNumber);

rewind(dico);
while (chosenWord > 0)
{
    characterRead = fgetc(dico);
    if (characterRead == '\n')
    {
        chosenWord--;
    }
    
}
fgets(chosenWord, 100, dico);

chosenWord[strlen(chosenWord) - 1] = '\0';

fclose (dico);
return (1);

}

int aleatoryNumber(int maxNumber)
{
    srand(time(NULL));
    return (rand() % maxNumber);
}