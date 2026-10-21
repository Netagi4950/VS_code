#include <stdio.h>

int main(){
    int x=25,*y,**z; 
    y=&x;
    z=&y;
    printf("x(address)%u\n",&x);
    printf("y(address)%u\n",&y);
    printf("z(address)%u\n",&z);

    printf("\nx(value)%d\n",x);
    printf("y(value)%d\n",y);
    printf("z(value)%d\n",z);

    **z=6;

    printf("\nx(value)%d\n",x);
    printf("y(value)%d\n",y);
    printf("z(value)%d\n",z);

    printf("\nthe new value of x is-%d\n",x);
    printf("*y (pointer value)%d\n",y);
    printf("**z(pointer value)%d\n",**z);
    return 0;

}