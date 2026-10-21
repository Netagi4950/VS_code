#include <stdio.h>
#include <math.h>

int nod(int n){
    int c=0;
    while(n!=0){
        n/=10;
        c++;

    }
    return c;
}
int main(){
    int n,num,d,s=0,p;
    printf("enter a no ");
    scanf("%d",&n);
    num=n;
    p=nod(num);
    while(n!=0){
        d=n%10;
        n/=10;
        s+=pow(d,p);

    }
    if(s== num){
        printf("%d is an armstrong no\n",num);

    }
    else{
        printf("%d is not an armstrong no\n",num);
    }
    return 0;
}