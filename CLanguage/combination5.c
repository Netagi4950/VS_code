#include <stdio.h>
int main(){
    int c,r,i=1;
    for (r=1;r<=4;r++){
        for (c=1;c<=r;c++){
            
            printf("%d\t",i++);
            while (i>1&&i<3){
                i=0;
            }
        }
        printf("\n");
    }
}
