#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    system ("cls");
    char name[100];

    printf("Enter your name::");
    scanf ("%39s",name);
    printf ("Your name is --%s\n",name );
    int n,i;
    n=strlen (name);
    char c[i];
    printf ("The no of letter in the word is--%d\n\n",n);
    for (i=0;i<=n;i++){
        c[i]=name[n-1-i];
    }
    c[n]='\0';
    printf("Your revind name is--%s\n\n",c);
    system ("pause ");
    return 0;
}