#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");
    int r,c,n;
    printf("Enter a no ");
    scanf("%d",&n);
    for (r=1;r<=n;r++){
        for (c=1;c<=r;c++){
            printf ("%d\t",c);
        }
        printf("\n");
    }
    system("pause ");
    return 0;
}