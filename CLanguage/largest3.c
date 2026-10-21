#include <stdio.h>
int main(){
    int n,p,k;
    printf("Enter a no:");
    scanf("%d %d %d",&n,&p,&k);
    if(n>p && n>k){
        printf("%d is the largest no ",n);

    }
    else if (p>n && p>k){
        printf("%d is the largest no",p);


    }
    else if(k>p && k>n){
        printf("%d is the largest no",k);
    }
    else{
        printf("%d %d %d All are equal",n,p,k);

    }
    return 0;


}