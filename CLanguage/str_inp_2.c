#include <stdio.h>
int main(){
    char text [20];
    printf ("?Enter a text ");
    scanf ("%[^\n]",text);
    printf ("%s",text);
    return 0;
}