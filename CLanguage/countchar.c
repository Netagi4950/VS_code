#include <stdio.h>
int main(){
    int a[5],i;
    for (i=0;i<5;i++){
        printf("Enter element ");
        scanf("%d",&a[i]);

    }   
    printf("The array display  \n");
    for (i=0;i<5;i++){
        printf("%d",a[i]);
        if (a[i]==2){
            printf("\n OK");
        }
        else{
            printf("\n NO");
        }
    } 
    return 0;
}
