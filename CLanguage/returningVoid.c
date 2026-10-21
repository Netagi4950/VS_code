#include <stdio.h>
int fact(int n){
    int i;
    for (i=n-1;i>=1;i--){
        n*=i;
        return n;
    }
}
int main(){
int n;
printf("Enter a no ");
    scanf("%d",&n);
    printf("Factroial of %d is %d \n",n ,fact(n));
    return 0;
}















