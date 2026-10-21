#include <stdio.h>
#include <string.h>

int main(void) {
    char word[20];

    printf("Type the passcode: ");
    scanf("%19s", word);
    printf("your passcode is %s\n\n",word);

    if (strcmp(word, "sayantan4950") == 0) {
        printf("correct");
    } 
    else {
        printf("incorect");
    }

    return 0;
}