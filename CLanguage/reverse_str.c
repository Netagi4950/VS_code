#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    system ("cls");
    char name [20];
    printf ("Enter your name ::");
    scanf ("%10s",name );
    int i,n,t;
    n=strlen(name);
    i=n;
    i=t;
    char name_2[100];
    for (n=n-1;n>=0;n--){
        for (i = 0; i <= n; i++) {
            name_2[i] = name[n - i];
        }
        name_2[n + 1] = '\0';
        printf("%s\n\n",name_2);
    }
    system("pause ");
    return 0;
}