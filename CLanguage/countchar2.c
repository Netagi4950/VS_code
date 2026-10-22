#include <stdio.h>
#include <string.h>
int main(){
    char n[100];
    printf("Enter your words::");
    scanf("%20s",n);
    int no;
    no=strlen(n); 
    printf("The no of char in your word is %d",no);
    return 0;
}