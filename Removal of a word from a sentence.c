#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    
    // Get the sentence input from the user
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Capitalize the first letter of each word
    int in_word = 0; // Flag to indicate if we are inside a word

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            // When a space is found, set the flag to indicate end of a word
            in_word = 0;
        } else if (!in_word) {
            // Capitalize the first letter of the word
            str[i] = toupper(str[i]);
            in_word = 1; // Set the flag to indicate we are inside a word
        }
    }

    // Print the result
    printf("Capitalized sentence: %s\n", str);
    return  0;
}