#include <stdio.h>
#include <string.h>
int main(){
    char test[20];
    printf("Enter the name ");
    fgets(test,20,stdin);
    printf("name : %s",test);
    if (test=='sayantan'){
        printf("OK");
    }
    else{
        printf("No");
    }
    return 0;
    
}