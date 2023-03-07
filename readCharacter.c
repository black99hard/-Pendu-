#include "main.h"

char readCharacter()
{
    char character = 0;
    character = getchar();
    character = toupper(character);

    while (getchar() != '\n');
   
    return (character);
    
}