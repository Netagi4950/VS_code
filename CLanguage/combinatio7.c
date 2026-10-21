#include <stdio.h>
int main(){
    int c,r,s,k;
    for (r=1;r<=5;r++){//1
        for (c=1;c<=r;c++){//1
            printf("*\t");
        }
        for (s=8;s>=r+c-2;s=s-1){//7
            printf ("\t");
        }
        for (k=1;k<=r;k++){
            printf("*\t");
            //printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}
    