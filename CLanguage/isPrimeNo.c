#include <stdio.h>
#include <math.h>
typedef enum{False=0,True=1}boolean;
boolean isPrime(int n){
    int i;
    if(n>1){
        for(i=2;i<=sqrt(n);i++){
            if (n%i==0)return False;
            return True;
        }

    }
    else return False;

}
int main(){
    int i;
    printf("Twin prime no betweeen 1 and 100\n");
    for (i=1;i<=100;i++){
        if(isPrime(i)&&isPrime(i+2)){
            printf("(%d , %d)\n",i,i+2);
        }
    }
    return 0;
}