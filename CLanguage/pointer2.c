#include <stdio.h>
void display(int *x){
    int i;
    for (i=0;i<5;i++){
        printf("%d",*(x+i));

    }

}
int main(){
    int a[5]={51,62,89,12,52};
    printf("the array display -\n");
    display (a);
    return 0;
}