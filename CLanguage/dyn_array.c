#include <stdio.h>
#include<stdlib.h>
struct sallary{
    char name [50];
    float bas,da,hra,grass,pf,net;

};
int main(){
    struct sallary sal[8];
    int i;
    for(i=0;i<5;i++){
        printf("record #%d\n\n",(i+1));
        printf("Name :");
        fflush (stdin);
        fgets(sal[i].name ,50,stdin);
        printf("Basic sallary:");
        scanf("%f",&sal[i].bas);
        sal[i].da =sal[i].bas*25/100;
        sal[i].hra=sal[i].bas*45/100;
        sal[i].grass=sal[i].bas+sal[i].da+sal[i].hra;
        sal[i].pf=sal[i].bas*12/100;
        sal[i].net=sal[i].grass-sal[i].pf;
        printf("\n");

    } 
    systen ("cls");
    for (i=0;i<5;i++){
        if (sal[i].net>=8000){
            printf("----------\n");
            printf("Record3%d\n",(i+1));
            printf("-----------\n");
            printf("name \t\t:\t%s\n",sal[i].name );
            printf("basic sallary\t:\t%.2f\n",sal[i].bas);
            printf("D.A.\t:\t%.2f\n",sal[i].da);
            printf("HRA\t:\t%.2f\n",sal[i].hra);
            printf("grass sallary\t:\t%.2f\n",sal[i].grass);
            printf("provident fund\t:\t%.2f\n",sal[i].pf);
            printf("NEt sallary\t:\t%.2f\n",sal[i].net);
        }
    }
}