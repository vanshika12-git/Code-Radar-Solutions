#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char message[], int shift) {  // Correct function name
    for (int i = 0; i < strlen(message); i++) {
        if (isalpha(message[i])) {  // Check if the character is alphabetic
            char base = islower(message[i]) ? 'a' : 'A'; // Check case
            message[i] = (message[i] - base + shift) % 26 + base;
        }
    }
}