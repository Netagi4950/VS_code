#include <stdio.h>
int main(){
    int n,r=0,d;
    printf("enter a no; ");
    scanf("%d",&n);//123
    while(n!=0){
        d=n%10;//3
        n=n/10;//12
        r=r*10+d;//

    }
    printf("reverse of the no is %d",r);
    return 0;
}