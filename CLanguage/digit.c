

#include <stdio.h>
int main(){
    typedef long vlong;
    vlong i;
    vlong n;
    printf("Enter a no: ");
    scanf("%d",&n);
    for(i=0;n!=0.0;i++){
        n=(n/10);
    }
    printf("%d is the no of digit",i);
    return 0;
}

