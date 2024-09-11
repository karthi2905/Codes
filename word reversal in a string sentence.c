#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "This is a program.";
    int length = strlen(sentence);
    int start = 0, end = 0;

    printf("Original Sentence: %s\n", sentence);

    // Loop through each character of the string
    for (int i = 0; i <= length; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            // Reverse the current word
            end = i - 1;
            while (start < end) {
                char temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;
                start++;
                end--;
            }
            // Move the start to the next word
            start = i + 1;
        }
    }

    printf("Reversed Words: %s\n", sentence);

    return 0;
}