#include <stdio.h>

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    if (n%7==0){
        printf("%d it is a buzz no",n);
    
    }
    else if(n%10==7){
        printf("%d it is a buzz no",n);
    }
    else{
        printf("%d it is not a buzz no",n);
    }
    return 0;
}
