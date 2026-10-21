#include <stdio.h>
int i,n;
int main(){
    printf("Enter a no: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        n=i*i;
    }
    printf("%d is the factorial of %d ", n);

return 0;
}
