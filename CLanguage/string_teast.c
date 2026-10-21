#include <stdio.h>
#include <string.h>

int main(void) {
    char text[401];
    int count = 0;

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }

    printf("Count of vowels: %d\n", count);
    return 0;
}