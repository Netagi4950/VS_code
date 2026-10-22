#include <stdio.h>
#include <string.h>
int main(){
    char text [20];
    printf ("Enter a text ");
    fgets (text ,20,stdin);
    printf ("%s",text);
}