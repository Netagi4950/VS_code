#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main (){
    char name[50];
    printf ("Enter your name::");
    scanf("%30s",name );
    printf ("Your name is --%s\n\n",name );
    int n,i,count =0;
    n=strlen(name );
    for (i=1;i<=n;i++){
        //printf("OK\n");
        char c[i];
        c[i]=name[n-i];
        
        printf ("%c\n",c[i]);
        if(strpbrk(c,"abcdefghijklmnopqrstuvwxyz")==NULL){
            count+=1;
        }
        
    }
if (count >=1){
    printf ("The no of letter you have in your text is--%d\n\n",count );
}
    return 0;
}