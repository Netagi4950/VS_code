#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void) {
    srand((unsigned int)time(NULL)); // Called ONCE at startup
    char c;
    for (int i = 0; i < 1; i++) {
        int num = rand() % 100; // Different numbers each iteration
        printf("The no is--%d\n", num);
        
        
    }

    return 0;
}