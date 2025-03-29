#include <stdio.h>
#include <string.h>
#include <ctype.h>

void CaesarCipher(char[], int);
{ 
    for (int i = 0; i < strlen(message); i++)
     
        if (isalpha(message[i]))
         { 
            char base = islower(message[i]) ? 'a' : 'A'; 
            message[i] = (message[i] - base + shift) % 26 + base;
        }

}