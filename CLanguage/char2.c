#include <stdio.h>
int main(){
    char test[20];
    printf("Enter the name ");
    scanf("%[^\n]",test);
    printf("the name is : %s",test);
    return 0;

}