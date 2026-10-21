#include <stdio.h>
#include <stdlib.h>

void google(){
    system("cls");
    int n,i,in,l,k,m;
    char q;
    
    //input section
    printf("Enter the amound :");
    scanf("%d",&n);
    printf("enter the interest rate :");
    scanf("%d",&in);
    printf("Enter the no of year you want :");
    scanf("%d",&m);
    //calculation sectionn
    for (i=1;i<=m;i++){
        l=n*in;
        k=l/100;
        n=n+k;
    }
    //print the result
    printf("the result is :%d \n",n);
    system("pause");
    return 0;
}
int main(){

}