#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    system ("cls");
    int g,h;
    float math,i=0;
    printf("Enter me the hight form the uper level of hte water: ");
    scanf("%d",&h);
    g=10;
    math=2*g*h;
    while (i * i <= math){

        i++;
    }
    i--;
    system("cls");
    printf("Square root = %.2f\n", i);
    system("pause");
    return 0;
}