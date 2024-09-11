#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "The sun is rising.";
    int length = strlen(sentence);

    printf("Original Sentence: %s\n", sentence);

    // Reverse the entire sentence first
    int start = 0, end = length - 1;
    while (start < end) {
        char temp = sentence[start];
        sentence[start] = sentence[end];
        sentence[end] = temp;
        start++;
        end--;
    }

    // Now reverse each word in the reversed sentence to correct word order
    start = 0;
    for (int i = 0; i <= length; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            end = i - 1;
            while (start < end) {
                char temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }

    printf("Reversed Sentence: %s\n", sentence);

    return 0;
}