#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    system ("cls");
    double h,h1;
    double math,i=0;
    printf ("Ennter me the hight form the uper level of hte water: ");
    scanf ("%lf",&h);
    system("cls");
    printf ("Enter me the hight form the lower level of hte water: ");
    scanf ("%lf",&h1);

    math =h*h1;
    math =math*2;
    math = sqrt(math);
    //while (i * i <= math){

    //    i++;
    //}
    //i--;
    system ("cls");
    printf ("The value of X is : %.2f\n",math);
    system ("pause");
    return 0;
}