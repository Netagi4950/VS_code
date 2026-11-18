#include <stdio.h>
#include <stdlib.h>
int main (){
    system ("cls");
    int h,h1;
    float math;
    printf ("Ennter me the hight form the uper level of hte water: ");
    scanf ("%d",&h);
    system("cls");
    printf ("Enter me the hight form the lower level of hte water: ");
    scanf ("%d",&h1);

    math =h*h1;
    math =math*2;
    math =sqrt(math);
    system ("cls");
    printf ("The value of X is : %.2f\n",math);
    system ("pause");
    return 0;
}