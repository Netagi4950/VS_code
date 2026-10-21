#include <stdio.h>

int main(){
    
    int a[5],i,b=0;
    
    printf("Enter element ");
    
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);

    }
    printf ("The array display  \n");
    for (i=0;i<5;i++){
        b=b+a[i];
    }
    printf("The sum of the no are %d\n", b);
    return 0;
}
