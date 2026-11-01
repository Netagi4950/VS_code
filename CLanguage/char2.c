#include <stdio.h>
#include <stdlib.h>

int main(){
    char test[20];
    system("cls");
    printf("Enter the name ");
    scanf("%[^\n]",test);
    system("cls");
    printf("the name is : %s",test);
    return 0;

}