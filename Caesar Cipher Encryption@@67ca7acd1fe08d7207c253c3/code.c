#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to encrypt a message using Caesar Cipher
void caesarCipher(char message[], int shift) {
    for (int i = 0; i < strlen(message); i++) {
        if (isalpha(message[i])) { // Check if the character is alphabetic
            char base = islower(message[i]) ? 'a' : 'A'; // Determine if it's lowercase or uppercase
            message[i] = (message[i] - base + shift) % 26 + base; // Shift within the alphabet
        }
    }
}