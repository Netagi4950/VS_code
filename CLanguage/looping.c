#include <stdio.h>
int main(){
    int n;
    for(n=0;n<=10;n+=1){
        printf("%d \n",n);
    }
    return 0;
}

int main(){
    int n;
    for (n=1;n<=10;n++){
        if (n%2==0){
            printf ("%d \n",n);
        }
    }
    return 0;
} 
int main(){
    int n;
    for (n=1;n<=5;){
        printf("%d \n",n++);
    }
    return 0;
}
int main(){
    
    int n=1;
    for (;n<=5;){
        printf ("%d \n",n++);
    }
    return 0;
}
int main(){
    int n;
    for (n=1;n<=5;printf("%d ",n++));
    return 0;
}