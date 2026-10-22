#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    system ("cls");
    char name [10];
    printf ("Enter your name ::");
    scanf ("%9s",name );
    int i,n;
    n=strlen(name);
    for (n=n-1;n>=0;n--){
        char c[20]=name[n];
        printf("%s",c);
    }
    system("pause ");
    return 0;
}