#include <stdio.h>
void input(int n){
    int m,i,a[n],sum=0,sub=0,mul=0,k,d,ave=0,div=0;


    d=n;
    //printf ("%d \n",n);
    printf("------CAUTION------\n");
    printf("it is necessary to have only the certain no of digit you have describe before \n");
    printf("or thr code will take the last digit as its next input\n\n\n");
    printf("Enter some no:");
    for (m=0;m<n;m++){
        scanf("%d",&a[m]);
    }
    //printf("Hellow");
    //for(m=0;m<n;m++){
    //    printf("The no you have entered is: %d \n",a[m]);
    //}
    //int sum=0,ave =0,sub=0,div=0,mul=0,k;
    printf("If you want to do sum-1,substraction-2,multiplication-3,division-4,average-5 :");
    scanf("%d",&k);
    switch(k){
        default:
            printf("the case is out of stok ");
            break;
        case 1:
            for (m=0;m<n;m++){
                sum=a[m];
                for (m=1;m<n;m++){
                    sum=sum+a[m];

                }
            }
            printf ("The sum of the no are : %d \n",sum);
            //printf("%d\n",m);
            break;
        case 2:
            if (n<=2){
            for (m=0;m<n;m++){
                sub=a[m]-a[m];
            }
            printf("The substraction of the no are : %d \n",sub);
            }
            else {
                printf("The substraction of the no is not possible ");
            }
            printf ("the can be felt occurred as it is impossible to minus something like in this way");
            break;
        case 3:
            for (m=0;m<n;m++){
                mul=a[m];
                for (m=1;m<n;m++){
                    mul=mul*a[m];

                }
            } 
            printf("The multiplication of the no are: %d \n",mul);
            break;
        case 4:
            if (n<=2){
                div=a[m];
                for (m=0;m<n;m++){
                    div=div/a[m];
            }
            printf("The division of the no are: %d \n",div);
            }
            else{
                printf("The divition of the no is not possible ");
            }
            break;
        case 5:
            for (m=0;m<n;m++){
                sum=a[m];
                for (m=1;m<n;m++){
                    sum=sum+a[m];
                    ave=(sum)/n;

                }
            }   
            printf("%d %d %d \n",sum,n,m);
            //printf("%d\n",m);
            //ave=(sum/n);
            printf("The average of the no is: %d \n",ave );
        break;
//the ave is correct the problem is with the compiler in it... that is just messed up 

    }

}
int main(){
    int n;
    printf("This is a calculator program to do simple math \n\n\n");
    printf ("Enter how many no do you want to enter :");
    scanf("%d",&n);
    input(n);
    return 0;
}
