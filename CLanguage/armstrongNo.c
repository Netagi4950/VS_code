#include <stdio.h>
#include <stdlib.h>
int main(){
    int  n,r,i=0,l=1,m=0,d,k,p,q,s,e;//17 ver  
    
    printf("enter a no: ");
    scanf("%d", &n);
    s=n;//ver change
    e=n;//ver change
    for(q=0;n!=0.0;q++){
        n=(n/10);
    }

    r=q;//ver change
    
    for(;s!=0;){
        d=s%10;   
        s=s/10;
        p=d;//ver change
        k=d;//ver change
        for(;l!=r;){
            k=d*p;
            l=l+1;
            d=k;//ver change
        }
        l=1;
        m=m+k;
        i=i+1;
            
    }
    
    printf("%d is the result\n", m);
    if(m==e){
        printf("\n%d is an armstrong number", e);
    }
    else{
        printf("\n%d is not an armstrong number", e);
    }
    system("pause");
    return 0;
}
