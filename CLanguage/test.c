#include <stdio.h>
int main() {
    int a[2][3] = {
        {6, 2, 5},
        {7, 3, 6}
    };

    for (int r = 0; r< 2; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%d ", a[r][c]);
        }
        printf("\n");
    }

    return 0;
}