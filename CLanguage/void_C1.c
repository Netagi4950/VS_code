 
#include <stdio.h>
void x(int n){
    int i;
    printf("loop of %d \n",n);
    for(i=1;i<=n;i++){
        printf("%d",i);
    }
    printf("\n \n");
}
int main(){
    x(5);
    x(10);
    x(15);
    return 0;
}