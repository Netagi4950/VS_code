#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char name[40];
    printf ("What is your name::");
    scanf ("%20s",name );
    printf("Your name is--%s\n",name );
    int i,n,l,count=0;
    char c[l];
    i=strlen(name );
    for (n=0;n<=i;n++){
        c[l]=name[n-1];
        if (c=='\0'){
            count+=1;
        }
        
    }
    printf ("The no of space you  have in your word is--%d\n\n",count );
    return 0;
}