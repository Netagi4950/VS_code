#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    system ("cls");
    int g,h;
    float math;
    printf("Enter me the hight form the uper level of hte water: ");
    scanf("%d",&h);
    g=10;
    math=2*g*h;
    math=sqrt(math);
    system("cls");
    printf("Square root = %.2f\n",math);
    system("pause");
    return 0;
}