#include <stdio.h>
int main(){
    int a[5],i;
    printf("Enter 5 element  ");
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
        while (a[i]%2!=0){
            for (;a[i]%2!=0;){
                a[i]=a[i]+1;
            }
        }
        
    }
    for (i=0;i<5 ;i++){
        printf("%d " ,a[i]);
    }
    

    return 0;
}
