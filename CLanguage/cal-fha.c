#include <stdio.h>
#include <stdlib.h>
int main(){
    int c,f;
    system("cls");
    printf("Enter the temp in celsius :");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("the temp in fahrenheit is %d\n",f);
    system("pause");
    return 0;
}