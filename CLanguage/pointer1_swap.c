#include <stdio.h>

void swap(int *a,int *b){
    *a^=*b;
    *b^=*a;
    *a^=*b;

}
int main(){
    int x,y;
    printf("Enter two no:");
    scanf("%d %d",&x,&y);
    printf("before swap-\tx=%d\ty=%d\n",x,y);
    swap(&x,&y);
    printf("After swap -\tx=%d\ty=%d\n",x,y);
    return 0;
    
}