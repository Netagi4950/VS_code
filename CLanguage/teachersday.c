#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    system("cls");

    char a[0];
    int r,c,i;
    printf("Enter your name: ");
    scanf ("%[^\n]",a);
    printf("\n");
    printf("%s sir presenting to you-------\n\n\n",a);

    char banner[5][48] = {
        "H       H     A      P P P P  P P P P  Y       Y",
        "H       H    A A     P     P  P     P    Y   Y",
        "H H H H H   A   A    P P P P  P P P P      Y",
        "H       H  A     A   P        P            Y",
        "H       H A       A  P        P            Y"
    };

    for (r=0; r<5; r++) {
        for ( c=0; banner[r][c]!='\0';c++) { // null character, value 0
            printf("%c", banner[r][c]);
        }
        printf("\n");
    }
    printf("\n");

    char name[5][85] = {
        "T T T T T  E E E E      A       C C C C  H       H  E E E E   R R R R   |S S S S",
        "    T      E           A A      C        H       H  E         R      R  |      S",
        "    T      E E E E    A   A     C        H H H H H  E E E E   R R R R    S S S S",
        "    T      E         A     A    C        H       H  E         R   R      S      ",
        "    T      E E E E  A       A   C C C C  H       H  E E E E   R     R    S S S S "
    };
    for (r=0; r<5; r++) {
        for ( c=0; name[r][c]!='\0';c++) { // null character, value 0
            printf("%c", name[r][c]);
        }
        printf("\n");

    }
    printf("\n");
    char day[5][50] = {
        "D D D D       A   Y       Y",
        "D       D    A A    Y   Y",
        "D       D   A   A     Y",
        "D       D  A     A    Y",
        "D D D D   A       A   Y"
    };
    for (r=0; r<5; r++) {
        for ( c=0; day[r][c]!='\0';c++) { // null character, value 0
            printf("%c", day[r][c]);
        }
        printf("\n");
    }
    printf("\n");
    

    system("pause");
    return 0;

}