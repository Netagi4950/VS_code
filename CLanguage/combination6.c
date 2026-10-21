#include <stdio.h>
int main(){
    int c,r,s;
    
    for (r=1;r<=5;r++){
        for (c=1;c<=r;c++){
        printf("*\t");
        }
        for (s=8;s>=r;s--){
            printf ("\t");
        }
        for (c=1;c<=r;c++){
            printf("*\t");
            //printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}